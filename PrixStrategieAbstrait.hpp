#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

class PrixStrategieAbstrait {

public:
    PrixStrategieAbstrait();
    virtual ~PrixStrategieAbstrait() = default;
    virtual double obtenirChangement() const = 0;
};
