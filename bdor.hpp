#pragma once
#include <map>
#include <string>
#include "BDCategorieAbstrait.hpp"

class BDOR {
public:
    BDOR();
    void ajouterCategorie(string nom, shared_ptr<BDCategorieAbstrait> categorie);
    shared_ptr<BDCategorieAbstrait> obtenirCategorie(string nom);
    
private:
    map<string, shared_ptr<BDCategorieAbstrait>> categories;
};
