#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <memory>
#include "OffreReservationAbstrait.hpp"
#include "PrixStrategieAbstrait.hpp"

class PrixAugmentationStrategie : public PrixStrategieAbstrait {
public:
    PrixAugmentationStrategie(OffreReservationAbstrait* contexte, double augmentation);
    PrixAugmentationStrategie(double augmentation);
    PrixAugmentationStrategie(OffreReservationAbstrait *contexte);
    int obtenirPrix() const;
private:
    double augmentation;
};
