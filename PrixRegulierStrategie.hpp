#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <memory>

#include "PrixStrategieAbstrait.hpp"

class PrixRegulierStrategie : public PrixStrategieAbstrait {
public:
    PrixRegulierStrategie(OffreReservationAbstrait* contexte);
    int obtenirPrix() const;
};
