#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "ReservationAbstrait.hpp"
#include "ReservationElementaire.hpp"
#include "Moment.hpp"

using namespace std;


class ReservationDecorateurAbstrait : public ReservationElementaire {
public:
    ReservationDecorateurAbstrait();
    ReservationDecorateurAbstrait(shared_ptr<ReservationElementaire> reservation);
};
