#include "ReservationComposite.hpp"
#include "ReservationElementaire.hpp"
#include <cctype>

ReservationComposite::ReservationComposite(string nom, string type, bool masculin) : type(type), masculin(masculin){
    this->nom = nom;
};

ReservationComposite::ReservationComposite(ReservationComposite& source) {
    this->nom = source.nom;
    this->type = source.type;
    for (auto sousReservation : source.reservations) {
        shared_ptr<ReservationAbstrait> enfant;
        
        if (dynamic_pointer_cast<ReservationComposite>(sousReservation)){
            enfant = make_shared<ReservationComposite>(*dynamic_pointer_cast<ReservationComposite>(sousReservation));
        }else{
            enfant = make_shared<ReservationElementaire>(*dynamic_pointer_cast<ReservationElementaire>(sousReservation));
        }
        reservations.push_back(enfant);
    }
}

void ReservationComposite::ajouterReservation(shared_ptr<ReservationAbstrait> reservation) {
    reservations.push_back(reservation);
    reservation->definirVoyage(this->voyage);
    reservation->creerReservation(this, reservation);
}

void ReservationComposite::retirerReservation(string nomReservation) {
    if (nom == nomReservation) {
        string capitalizedType = type;
        capitalizedType[0] = toupper(type[0]);
        cout << "  " << capitalizedType << " " << nom << " efface!" << endl;
    }
    for (int i = 0; i < reservations.size(); i++) {
        reservations[i]->retirerReservation(nomReservation);
        if (reservations[i]->nom == nomReservation) {
            reservations.erase(reservations.begin() + i);
        }
    }
}


void ReservationComposite::creerReservation(ReservationComposite* parent, shared_ptr<ReservationAbstrait> element) {
    profondeur = parent->profondeur + 1;
    for (int i = 0; i < profondeur; i++){
        cout << "  ";
    }
    string capitalizedType = type;
    capitalizedType[0] = toupper(type[0]);
    cout << capitalizedType << " " << nom << " " << (masculin ? "cree" : "creee") << " dans le " << parent->type << (parent->type == "" ? "" : " ") << parent->nom << "!" << endl;
}

void ReservationComposite::definirVoyage(Voyage* voyage) {
    ReservationAbstrait::definirVoyage(voyage);
    for (auto enfant: reservations){
        enfant->definirVoyage(voyage);
    }
}



