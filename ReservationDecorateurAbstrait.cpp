#include "ReservationDecorateurAbstrait.hpp"


ReservationDecorateurAbstrait::ReservationDecorateurAbstrait(ReservationAbstrait* reservation, shared_ptr<Moment> moment) : reservation(reservation), moment(moment) {
}

void ReservationDecorateurAbstrait::creerReservation(ReservationComposite* parent, shared_ptr<ReservationAbstrait> element) {
    reservation->creerReservation(parent, element);
};
void ReservationDecorateurAbstrait::retirerReservation(string nomReservation) {
    reservation->retirerReservation(nomReservation);
};
