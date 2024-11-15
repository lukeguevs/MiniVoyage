#include "ReservationComposite.hpp"

ReservationComposite::ReservationComposite(string nom) : nom(nom) {};

void ReservationComposite::ajouterReservation(shared_ptr<ReservationAbstrait> reservation) {
    reservations.push_back(reservation);
    reservation->creerReservation(this);
}

void ReservationComposite::retirerReservation(shared_ptr<ReservationAbstrait> reservation) {
    for (int i = 0; i < reservations.size(); i++) {
        if (reservations[i] == reservation) {
            reservations.erase(reservations.begin() + i);
            break;
        }
    }
}

void ReservationComposite::creerReservation(ReservationComposite* parent) {
    profondeur = parent->profondeur + 1;
    for (int i = 0; i < profondeur; i++){
        cout << "  ";
    }
    cout << nom << " cree dans le " << parent->nom << "!" << endl;
}

