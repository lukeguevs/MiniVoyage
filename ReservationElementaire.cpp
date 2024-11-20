#include "ReservationElementaire.hpp"

ReservationElementaire::ReservationElementaire(shared_ptr<const OffreReservationAbstrait> offre, Moment momentAchat, BDP bdp) : 
offre(offre), momentAchat(momentAchat){
    baseDePlanif = make_shared<BDP>(bdp);
    total = conversionEUROCAN(offre);
};

void ReservationElementaire::creerReservation(ReservationComposite* parent) {
    profondeur = parent->profondeur + 1;
    for (int i = 0; i <= profondeur; i++){
        cout << "  ";
    }
    cout << "Reservation creee : " << parent->nomVoyage << "/" << momentAchat.date << "/" << offre->nom << "!" << endl;
    baseDePlanif->ajouterEntree(make_shared<ReservationElementaire>(*this));
}

void ReservationElementaire::retirerReservation(shared_ptr<ReservationAbstrait> reservation){
    cout << "Reservation " << offre->nom << " efface!" << endl;
}

int ReservationElementaire::conversionEUROCAN(shared_ptr<const OffreReservationAbstrait> offre){
    if (offre->devise == "EURO") return (offre->prix * (2 / 3));
    else return offre->prix;
}

void ReservationElementaire::setVendeur(Vendeur nouveauVendeur){
    vendeur = nouveauVendeur;
}
Vendeur ReservationElementaire::getVendeur(){
    return vendeur;
}