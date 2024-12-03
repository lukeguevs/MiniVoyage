#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include "PrixStrategieAbstrait.hpp"
#include "PrixStrategieAbstrait.hpp"
#include "OffreReservationAbstrait.hpp"

class PrixRabaisStrategie : public PrixStrategieAbstrait {
private:
    double rabais;
public:
    PrixRabaisStrategie(double rabais);
    double obtenirChangement() const;
};
