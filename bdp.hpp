#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "BDAbstrait.hpp"
#include "ReservationElementaire.hpp"

using namespace std;

class BDP: public BDAbstrait<ReservationElementaire>{
public:
    BDP();
    shared_ptr<ReservationElementaire> createObjectFromRow(vector<string> row);
};

