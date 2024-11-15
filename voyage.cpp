#include "Voyage.hpp"

Voyage::Voyage(string nom, Voyageur voyageur) :
    voyageur(voyageur),
    reservations(ReservationComposite(nom)){
    cout << "Voyage de " << voyageur.nom << " cree!" << endl;
};

void Voyage::ajouterReservation(shared_ptr<ReservationAbstrait> reservation) {
    reservations.ajouterReservation(reservation);
}
