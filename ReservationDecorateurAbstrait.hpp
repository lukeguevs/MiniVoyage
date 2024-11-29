#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "ReservationAbstrait.hpp"
#include "Moment.hpp"

using namespace std;


class ReservationDecorateurAbstrait : public ReservationAbstrait {
public:
    ReservationDecorateurAbstrait(ReservationAbstrait* reservation, shared_ptr<Moment> moment);
    void creerReservation(ReservationComposite* parent, shared_ptr<ReservationAbstrait> element);
    void retirerReservation(string nomReservation);
private:
    ReservationAbstrait* reservation;
    shared_ptr<Moment> moment;
};
