#include "BDCategorieAbstrait.hpp"
#include <iostream>


using namespace std;

BDCategorieAbstrait::BDCategorieAbstrait() {}

BDCategorieAbstrait::BDCategorieAbstrait(string categorie) {
    nomCategorie = categorie;
    cout << "Categorie " << nomCategorie << " creee!" << endl;
}

void BDCategorieAbstrait::ajouterEntree(OffreReservationAbstrait offre) {
    cout << nomCategorie << endl;
}
