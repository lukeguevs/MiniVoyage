#pragma once
#include <map>
#include <string>
#include "BDCategorieAbstrait.hpp"
#include "IterateurBDOR.hpp"
#include <iostream>
using namespace std;

class IterateurBDOR;

class BDOR {
public:
    BDOR();
    void ajouterCategorie(string nom, shared_ptr<BDCategorieAbstrait> categorie);
    shared_ptr<BDCategorieAbstrait> obtenirCategorie(string nom);
    shared_ptr<IterateurBDOR> obtenirIterateur();
    map<string, shared_ptr<BDCategorieAbstrait>> getCategories();

private:
    map<string, shared_ptr<BDCategorieAbstrait>> categories;
    shared_ptr<IterateurBDOR> iterator;
};
