#include "BDOR.hpp"
#include <iostream>

using namespace std;

BDOR::BDOR() {
    cout << "Objet BDOR cree!\n";
}

void BDOR::ajouterCategorie(string nom, shared_ptr<BDCategorieAbstrait> categorie) {
    categories[nom] = categorie;
}

shared_ptr<BDCategorieAbstrait> BDOR::obtenirCategorie(string nom) {
    return categories[nom];
}
