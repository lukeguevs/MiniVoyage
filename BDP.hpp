#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "OffreReservationAbstrait.hpp"
#include "Vendeur.hpp"
#include "BDAbstrait.hpp"
#include "ReservationElementaire.hpp"
using namespace std;

class ReservationElementaire;

class BDP: public BDAbstrait<ReservationElementaire> {
public:
    BDP() = default;
    shared_ptr<ReservationElementaire> createObjectFromRow(vector<string> row);
};
