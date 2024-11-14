#pragma once
#include <map>
#include <string>
#include "BDCategorieAbstrait.hpp"

class BDOR {
public:
    BDOR();
    void ajouterCategorie(string nom, BDCategorieAbstrait categorie);
    BDCategorieAbstrait obtenirCategorie(string nom);
private:
    map<string, BDCategorieAbstrait> categories;
};
