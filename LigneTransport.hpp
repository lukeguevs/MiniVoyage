#pragma once
#include <iostream>
#include <string>
#include "Moment.hpp"
#include "Avion.hpp"

using namespace std;

class LigneTransport {
    
public:
    LigneTransport(
        string nom,
        string numero,
        string destinationDepart,
        string destinationFin,
        Moment momentDepart,
        Moment momentFin,
        Avion vehicule
   );
    
    string nom;
    string numero;
    string destinationDepart;
    string destinationFin;
    Moment momentDepart;
    Moment momentFin;
    Avion vehicule;
};
