#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

class OffreReservationAbstrait;

class PrixStrategieAbstrait {
protected:
    OffreReservationAbstrait* contexte;
public:
    PrixStrategieAbstrait();
    PrixStrategieAbstrait(OffreReservationAbstrait* contexte);
    void etablirContexte(OffreReservationAbstrait* contexte);
    virtual ~PrixStrategieAbstrait() = default;
    virtual int obtenirPrix() const = 0;
};
