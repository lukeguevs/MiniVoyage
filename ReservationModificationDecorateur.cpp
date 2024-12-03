#include "ReservationModificationDecorateur.hpp"


void ReservationModificationDecorateur::ajouterModification(shared_ptr<ReservationElementaire> modification) {
    modifications.push_back(modification);
}
void ReservationModificationDecorateur::retirerModification(shared_ptr<ReservationElementaire> modification) {
    for (auto i = modifications.size() - 1; i >= 0; i--) {
        if (modifications[i].get() == modification.get()) modifications.erase(modifications.begin() + i);
    }
}

ReservationModificationDecorateur::ReservationModificationDecorateur(shared_ptr<ReservationElementaire> reservation) : ReservationDecorateurAbstrait(reservation), 
reservation(reservation){
}

vector<shared_ptr<ReservationElementaire>> ReservationModificationDecorateur::getModifications(){
    return modifications;
}

shared_ptr<ReservationModificationDecorateur> ReservationModificationDecorateur::transformerEnDecorateur(
        vector<shared_ptr<ReservationAbstrait>>& reservations, shared_ptr<ReservationAbstrait> res) 
    {
        for (auto& reservation : reservations) {
        if (reservation == res) {
            
        auto reservationElem = dynamic_pointer_cast<ReservationElementaire>(reservation);
            if (reservationElem) {
                
                auto reservationDeco = make_shared<ReservationModificationDecorateur>(reservationElem);

                reservation = reservationDeco;

                return reservationDeco;
                
            } else return nullptr;
            
        }
    }
    return nullptr;
}

void ReservationModificationDecorateur::changerReservationVoyage(shared_ptr<Voyage>& voyage, shared_ptr<ReservationElementaire> res){
    
    for (auto segment : voyage->reservations->reservations) {
        auto segmentPtr = dynamic_pointer_cast<ReservationComposite>(segment);
        if (!segmentPtr) continue;

        for (auto journee : segmentPtr->reservations) {
            auto journeePtr = dynamic_pointer_cast<ReservationComposite>(journee);
            if (!journeePtr) continue;

            for (size_t i = 0; i < journeePtr->reservations.size(); ++i) {
                auto reservationPtr = dynamic_pointer_cast<ReservationElementaire>(journeePtr->reservations[i]);
                if (reservationPtr && reservationPtr->nom == res->nom && 
                    reservationPtr->momentAchat.date == res->momentAchat.date) {
                    journeePtr->reservations[i] = res;
                    return;
                }
            }
        }
    }
}

string ReservationModificationDecorateur::afficher(){
    reservation->afficher();
    string returnVal = "";
    for (auto mod : modifications){
        cout << "    Reservation " << mod->nom << " pour le " << mod->momentAchat.date << " à " << mod->momentAchat.heure << "." << endl;
        returnVal += "    Reservation " + mod->nom  + " pour le " + mod->momentAchat.date + mod->momentAchat.heure  + "\n";
    }
    return returnVal;
}


void ReservationModificationDecorateur::retirerReservation(string nomReservation) {
    for (auto i = modifications.size() - 1; i >= 0; i--) {
        if (modifications[i].get()->nom == nomReservation) modifications.erase(modifications.begin() + i);
    }
    return;
}

void ReservationModificationDecorateur::annuler(){
    reservation->annuler();
    modifications.clear();
}