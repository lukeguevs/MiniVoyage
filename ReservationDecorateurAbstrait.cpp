#include "ReservationDecorateurAbstrait.hpp"


ReservationDecorateurAbstrait::ReservationDecorateurAbstrait(ReservationAbstrait* reservation) {
    this->reservation = reservation;
}

void ReservationDecorateurAbstrait::creerReservation(ReservationComposite* parent, shared_ptr<ReservationAbstrait> element) {
    reservation->creerReservation(parent, element);
};
void ReservationDecorateurAbstrait::retirerReservation(string nomReservation) {
    reservation->retirerReservation(nomReservation);
};
