#include "OffreReservationAbstrait.hpp"
#include "PrixRegulierStrategie.hpp"

OffreReservationAbstrait::OffreReservationAbstrait(string nom, int prix, string devise) : nom(nom), prix(prix), devise(devise) {
    strategiePrix = make_shared<PrixRegulierStrategie>(this);
};

int OffreReservationAbstrait::obtenirPrix() const {
    return strategiePrix->obtenirPrix();
}

void OffreReservationAbstrait::changerStrategie(shared_ptr<PrixStrategieAbstrait> strategie) {
    strategie->etablirContexte(this);
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
