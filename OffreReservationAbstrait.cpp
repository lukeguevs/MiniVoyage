#include "OffreReservationAbstrait.hpp"


OffreReservationAbstrait::OffreReservationAbstrait(string nom, int prix, string devise) : nom(nom), prix(prix), devise(devise) {
    strategiePrix = make_shared<PrixAugmentationStrategie>(0);
};

int OffreReservationAbstrait::obtenirPrix() const {
    return prix * strategiePrix->obtenirChangement();
}

void OffreReservationAbstrait::changerStrategie(shared_ptr<PrixStrategieAbstrait> strategie) {
    strategiePrix = strategie;
}

string OffreReservationAbstrait::obtenirDevise() const {
    string nouvelleDevise = "";
    for (auto symbole : devise) {
        if (isalpha(symbole)) nouvelleDevise += symbole;
    }
    return nouvelleDevise;
}

void OffreReservationAbstrait::changePrix(int prix) {
    this->prix = prix;
}