#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "BDCategorieAbstrait.hpp"
#include "OffreReservationAbstrait.hpp"

using namespace std;

class BDExcursion: public BDCategorieAbstrait {
private:
    string nomCategorie = "Excursion";
    shared_ptr<OffreReservationAbstrait> createObjectFromRow(vector<string> row);
    
public:
    BDExcursion();
};

