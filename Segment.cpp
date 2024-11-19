
#include "Segment.hpp"

Segment::~Segment(){
    cout << nom << " efface!" << endl;
}

Segment::Segment(string nom) : ReservationComposite(nom) {};

void Segment::creerReservation(ReservationComposite* parent) {
    profondeur = parent->profondeur + 1;
    for (int i = 0; i < profondeur; i++){
        cout << "  ";
    }
    cout << "Segment " << nom << " cree dans le " << parent->nom << "!" << endl;
}
