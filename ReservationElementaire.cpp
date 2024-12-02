#include "ReservationElementaire.hpp"

ReservationElementaire::ReservationElementaire(shared_ptr<const OffreReservationAbstrait> offre, Moment momentAchat, BDP bdp) :
offre(offre), momentAchat(momentAchat) {
    baseDePlanif = make_shared<BDP>(bdp);
    nom = offre->nom;
};

ReservationElementaire::ReservationElementaire(ReservationElementaire& source): momentAchat(source.momentAchat), offre(source.offre) {
}

void ReservationElementaire::creerReservation(ReservationComposite* parent, shared_ptr<ReservationAbstrait> element) {
    if (element.get() != this) return;
    profondeur = parent->profondeur;
    for (int i = 0; i <= profondeur; i++){
        cout << "  ";
    }
    cout << "Reservation creee : " << voyage->nom << "/" << momentAchat.date << "/" << offre->nom << "!" << endl;

    baseDePlanif->ajouterEntree(dynamic_pointer_cast<ReservationElementaire>(element));
}

void ReservationElementaire::retirerReservation(string nomReservation){
}

int ReservationElementaire::obtenirOffreCad(){
    if (offre->obtenirDevise() == "EURO") return (offre->obtenirPrix() * conversionEuroCad);
    else return offre->obtenirPrix();
}

void ReservationElementaire::setVendeur(Vendeur nouveauVendeur){
    vendeur = nouveauVendeur;
}
Vendeur ReservationElementaire::getVendeur(){
    return vendeur;
}

double ReservationElementaire::conversionEuroCad = 1.5;
void ReservationElementaire::changeConversionEuroCad(double conversion){
    conversionEuroCad = conversion;
}

string ReservationElementaire::afficher(){
    string returnVal = "";
    cout << "   Reservation " << offre->nom
                    << ", prix total ($CA): " << obtenirOffreCad() << "." << endl;
    returnVal += "   Reservation " + offre->nom +
                ", prix total ($CA): " + to_string(obtenirOffreCad()) + "\n";
    return returnVal;
}