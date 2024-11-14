#include "BDOR.hpp"
#include <iostream>

using namespace std;

BDOR::BDOR() {
    cout << "Objet BDOR cree!\n";
}

void BDOR::ajouterCategorie(string nom, BDCategorieAbstrait categorie) {
    categories[nom] = categorie;
}

BDCategorieAbstrait BDOR::obtenirCategorie(string nom) {
    return categories[nom];
}
