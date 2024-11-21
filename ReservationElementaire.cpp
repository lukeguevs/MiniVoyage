#include "ReservationElementaire.hpp"

ReservationElementaire::ReservationElementaire(shared_ptr<const OffreReservationAbstrait> offre, Moment momentAchat, BDP bdp) :
offre(offre), momentAchat(momentAchat) {
    baseDePlanif = make_shared<BDP>(bdp);
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

int ReservationElementaire::conversionEUROCAN(){
    if (offre->devise == "EURO") return (offre->prix / 3 * 2);
    else return offre->prix;
}

void ReservationElementaire::setVendeur(Vendeur nouveauVendeur){
    vendeur = nouveauVendeur;
}
Vendeur ReservationElementaire::getVendeur(){
    return vendeur;
}
