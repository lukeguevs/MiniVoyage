#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "BDAbstrait.hpp"
#include "BDCategorieAbstrait.hpp"
#include "OffreReservationAbstrait.hpp"


using namespace std;

class BDCategorieAbstrait: public BDAbstrait<OffreReservationAbstrait>{
private:
    string nomCategorie;
public:
    BDCategorieAbstrait(string categorie);
    virtual ~BDCategorieAbstrait() = default;
    void ajouterEntree(shared_ptr<OffreReservationAbstrait> offre);
    
};

