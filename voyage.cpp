#include "Voyage.hpp"

Voyage::Voyage(string nom, Voyageur voyageur) :
    voyageur(voyageur),
    reservations(ReservationComposite(nom)), nom(nom) {
    cout << nom << " cree!" << endl;
    reservations.nomVoyage = nom;
};
Voyage::Voyage(string nom, Voyageur voyageur, const Voyage& voyage) : voyageur(voyageur), reservations(voyage.reservations), nom(nom)
{
    reservations.nom = nom;
    reservations.nomVoyage = nom;
    cout << nom  << " copie a partir du " << voyage.nom << "!" << endl;
}

void Voyage::ajouterReservation(shared_ptr<ReservationAbstrait> reservation) {
    reservations.ajouterReservation(reservation);
}

void Voyage::retirerReservation(shared_ptr<ReservationAbstrait> reservation){
    reservations.retirerReservation(reservation);
}

void Voyage::afficherTotal(){
    total = reservations.total;
    cout << "Total des frais pour le " << nom << "($ CA) : " << total << endl;
}
