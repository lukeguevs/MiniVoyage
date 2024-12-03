#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "PrixAugmentationStrategie.hpp"
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
    virtual ~OffreReservationAbstrait() = default;

    friend class PrixAugmentationStrategie;
    friend class PrixRabaisStrategie;
};
