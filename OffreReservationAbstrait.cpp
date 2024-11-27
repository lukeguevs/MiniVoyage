#include "OffreReservationAbstrait.hpp"

OffreReservationAbstrait::OffreReservationAbstrait(string nom, int prix, string devise) : nom(nom), prix(prix), devise(devise) {};

string OffreReservationAbstrait::obtenirDevise() const {
    string nouvelleDevise = "";
    for (auto symbole : devise) {
        if (isalpha(symbole)) nouvelleDevise += symbole;
    }
    return nouvelleDevise;
}
