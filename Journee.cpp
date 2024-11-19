
#include "Journee.hpp"


Journee::Journee(string nom) : ReservationComposite(nom) {};

void Journee::creerReservation(ReservationComposite* parent) {
    profondeur = parent->profondeur + 1;
    for (int i = 0; i < profondeur; i++){
        cout << "  ";
    }
    cout << "Journee " << nom << " creee dans le segment " << parent->nom << "!" << endl;
}

void Journee::retirerReservation(shared_ptr<ReservationAbstrait> reservation){
    cout << "Journee " << nom << " efface!" << endl;
}