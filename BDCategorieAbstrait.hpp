#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "BDAbstrait.hpp"
#include "Transport.hpp"
#include "BDCategorieAbstrait.hpp"

using namespace std;

class BDCategorieAbstrait: public BDAbstrait<OffreReservationAbstrait>{
private:
    string nomCategorie;
public:
    BDCategorieAbstrait();
    BDCategorieAbstrait(string categorie);
    void ajouterEntree(OffreReservationAbstrait offre);
};

