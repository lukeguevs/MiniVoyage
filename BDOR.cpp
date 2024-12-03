#include "BDOR.hpp"

BDOR::BDOR() : iterator(make_shared<IterateurBDOR>(this)) {
    cout << "Objet BDOR cree!\n";

}

void BDOR::ajouterCategorie(string nom, shared_ptr<BDCategorieAbstrait> categorie) {
    categories[nom] = categorie;
}

shared_ptr<BDCategorieAbstrait> BDOR::obtenirCategorie(string nom) {
    return categories[nom];
}

shared_ptr<IterateurBDOR> BDOR::obtenirIterateur() {
    return iterator;
}

map<string, shared_ptr<BDCategorieAbstrait>> BDOR::getCategories(){
    return categories;
}