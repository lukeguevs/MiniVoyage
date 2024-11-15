#include "BDHebergement.hpp"
#include <iostream>
#include "BDCategorieAbstrait.hpp"
#include "Hebergement.hpp"

using namespace std;

BDHebergement::BDHebergement() : BDCategorieAbstrait("Hebergement") {}

shared_ptr<OffreReservationAbstrait> BDHebergement::createObjectFromRow(vector<string> row) {
    Hotel hotel = {
        row[3],
        row[0],
        row[2],
        row[1]
    };
    
    return make_shared<Hebergement>(hotel, stoi(row[4]), row[5]);
}
