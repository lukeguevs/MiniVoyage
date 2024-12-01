#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "ReservationAbstrait.hpp"
#include "ReservationElementaire.hpp"
#include "Moment.hpp"

using namespace std;


class ReservationDecorateurAbstrait : public ReservationAbstrait {
public:
    ReservationDecorateurAbstrait() = default;
    ReservationDecorateurAbstrait(shared_ptr<ReservationAbstrait> reservation, shared_ptr<Moment> moment);
    void creerReservation(ReservationComposite* parent, shared_ptr<ReservationAbstrait> element);
    void retirerReservation(string nomReservation);
    shared_ptr<ReservationAbstrait> reservation;
    shared_ptr<Moment> moment;
};
