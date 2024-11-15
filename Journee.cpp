
#include "Journee.hpp"


Journee::Journee(string nom) : ReservationComposite(nom) {};

void Journee::creerReservation(ReservationComposite* parent) {
    profondeur = parent->profondeur + 1;
    for (int i = 0; i < profondeur; i++){
        cout << "  ";
    }
    cout << "Journee " << nom << " cree dans le segment " << parent->nom << "!" << endl;
}
