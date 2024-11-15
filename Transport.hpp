#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "OffreReservationAbstrait.hpp"
#include "LigneTransport.hpp"

using namespace std;

class Transport : public OffreReservationAbstrait{
public:
    Transport(LigneTransport ligne, string classe, int prix, string devise);
    
    LigneTransport ligne;
    string classe;
};
