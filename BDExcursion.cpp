#include "BDExcursion.hpp"
#include <iostream>
#include "BDCategorieAbstrait.hpp"
#include "Excursion.hpp"
#include <string>

using namespace std;

BDExcursion::BDExcursion() : BDCategorieAbstrait("Excursion") {}

shared_ptr<OffreReservationAbstrait> BDExcursion::createObjectFromRow(vector<string> row) {
    Activite activite = { stoi(row[2]), row[0], row[1] };
    
    return make_shared<Excursion>(activite, stoi(row[3]), row[4]);
}
