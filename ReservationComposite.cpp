#include "ReservationComposite.hpp"

ReservationComposite::ReservationComposite(string nom) : nom(nom) {};

void ReservationComposite::ajouterReservation(shared_ptr<ReservationAbstrait> reservation) {
    reservation->parent = this;
    reservation->nomVoyage = nomVoyage;
    reservations.push_back(reservation);
    reservation->creerReservation(this);
    total += reservation->total;
    if (parent){
        ReservationAbstrait *current = reservation->parent;
        while(current != nullptr){
            current->total += reservation->total;
            current = current->parent;
        }
    }
}

void ReservationComposite::retirerReservation(shared_ptr<ReservationAbstrait> reservation) {
    ReservationAbstrait* current = this;
    while (current != nullptr) {
        current->total -= reservation->total;  
        current = current->parent;
    }
    reservation->retirerReservation(reservation);
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



