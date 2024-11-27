#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class OffreReservationAbstrait {
private:
    string devise;
public:
    OffreReservationAbstrait(string nom, int prix, string devise);
    int prix;
    string nom;
    string obtenirDevise() const;
};
