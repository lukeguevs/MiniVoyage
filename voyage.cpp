#include "Voyage.hpp"

Voyage::Voyage(string nom, Voyageur voyageur) :
    voyageur(voyageur),
    reservations(ReservationComposite(nom)){
    cout << "Voyage de " << voyageur.nom << " cree!" << endl;
    reservations.nomVoyage = nom;
};
Voyage::Voyage(string nom, Voyageur voyageur, Voyage voyage) : voyageur(voyageur),
reservations(voyage.reservations){
    cout << "Voyage de " << voyageur.nom << "cree a partir du " << voyage.nom << "!";
    reservations.nomVoyage = nom;
}

void Voyage::ajouterReservation(shared_ptr<ReservationAbstrait> reservation) {
    reservations.ajouterReservation(reservation);
}
