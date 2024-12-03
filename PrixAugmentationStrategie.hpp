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
    PrixAugmentationStrategie(double augmentation);
    double obtenirChangement() const;
private:
    double augmentation;
};
