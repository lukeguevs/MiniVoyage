#include "Voyage.hpp"

Voyage::Voyage(string nom, Voyageur voyageur) :
    voyageur(voyageur),
    reservations(ReservationComposite(nom)){
    cout << "Voyage de " << voyageur.nom << " cree!" << endl;
    reservations.nomVoyage = nom;
};
Voyage::Voyage(string nom, Voyageur voyageur, const Voyage& voyage) : voyageur(voyageur), reservations(voyage.reservations)
{
    cout << "Voyage de " << voyageur.nom << " cree a partir du " << voyage.reservations.nomVoyage << "!" << endl;
    reservations.nomVoyage = nom;
}

void Voyage::ajouterReservation(shared_ptr<ReservationAbstrait> reservation) {
    reservations.ajouterReservation(reservation);
}

void Voyage::retirerReservation(shared_ptr<ReservationAbstrait> reservation){
    reservations.retirerReservation(reservation);
}

