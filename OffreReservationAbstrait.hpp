#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class OffreReservationAbstrait {
public:
    OffreReservationAbstrait(string nom, int prix, string devise);
    
    int prix;
    string devise;
    string nom;
};
