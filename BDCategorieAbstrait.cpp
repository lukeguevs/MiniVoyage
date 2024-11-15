#include "BDCategorieAbstrait.hpp"
#include <iostream>


using namespace std;

BDCategorieAbstrait::BDCategorieAbstrait(string categorie) {
    nomCategorie = categorie;
    cout << "Categorie " << nomCategorie << " creee!" << endl;
}

void BDCategorieAbstrait::ajouterEntree(shared_ptr<OffreReservationAbstrait> offre) {
    cout << "Entree " << offre->nom << " rattachee a la categorie " << nomCategorie << " creee!" << endl;
}
