#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "ReservationAbstrait.hpp"

using namespace std;


class ReservationDecorateurAbstrait : public ReservationAbstrait {
public:
    ReservationDecorateurAbstrait(ReservationAbstrait* reservation);
    void creerReservation(ReservationComposite* parent, shared_ptr<ReservationAbstrait> element);
    void retirerReservation(string nomReservation);
private:
    ReservationAbstrait* reservation;
};
