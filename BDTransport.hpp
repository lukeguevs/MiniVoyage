#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "BDCategorieAbstrait.hpp"
#include "OffreReservationAbstrait.hpp"

using namespace std;

class BDTransport: public BDCategorieAbstrait {
private:
    string nomCategorie = "Transport";
    shared_ptr<OffreReservationAbstrait> createObjectFromRow(vector<string> row);
    
public:
    BDTransport();
};

