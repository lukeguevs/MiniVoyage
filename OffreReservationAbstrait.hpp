#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class PrixStrategieAbstrait;
class ReservationElementaire;

class OffreReservationAbstrait {
protected:
    string devise;
    int prix;
    shared_ptr<PrixStrategieAbstrait> strategiePrix;
    
public:
    OffreReservationAbstrait(string nom, int prix, string devise);
    void changePrix(int prix);
    void changerStrategie(shared_ptr<PrixStrategieAbstrait> strategie);
    int obtenirPrix() const;
    string obtenirDevise() const;
    string nom;
    
    
    friend class PrixRegulierStrategie;
    friend class PrixRabaisStrategie;
};
