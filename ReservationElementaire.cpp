#include "ReservationElementaire.hpp"

ReservationElementaire::ReservationElementaire(shared_ptr<const OffreReservationAbstrait> offre, Moment momentAchat) : offre(offre), momentAchat(momentAchat) {};

void ReservationElementaire::creerReservation(ReservationComposite* parent) {
    profondeur = parent->profondeur + 1;
    for (int i = 0; i <= profondeur; i++){
        cout << "  ";
    }
    cout << "Reservation cree : " << parent->nomVoyage << "/" << momentAchat.date << "/" << offre -> nom << endl;
}
