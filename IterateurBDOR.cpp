#include "IterateurBDOR.hpp"
#include "BDOR.hpp"

IterateurBDOR::IterateurBDOR(BDOR* bdor) : bdor(bdor) {}

void IterateurBDOR::changerPrix(shared_ptr<PrixStrategieAbstrait> strategie, string categorie) {
    auto bdCategorie = bdor->obtenirCategorie(categorie);
    if (!bdCategorie) return;

    for (auto offre : bdCategorie->getElements()){
        offre->changerStrategie(strategie);
        offre->changePrix(offre->obtenirPrix());
    }
}



int IterateurBDOR::compterOffres(){
    int count = 0;
    for (auto categorie : bdor->getCategories()){
        auto offres = categorie.second->getElements();
        for (auto offre : offres){
            count++;
        }
    }
    return count;
}