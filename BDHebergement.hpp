#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "BDCategorieAbstrait.hpp"
#include "OffreReservationAbstrait.hpp"

using namespace std;

class BDHebergement: public BDCategorieAbstrait {
private:
    string nomCategorie = "Hebergement";
    shared_ptr<OffreReservationAbstrait> createObjectFromRow(vector<string> row);
    
public:
    BDHebergement();
};

