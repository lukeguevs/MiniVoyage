#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "OffreReservationAbstrait.hpp"
#include "Activite.hpp"

using namespace std;

class Excursion : public OffreReservationAbstrait{
public:
    Excursion(Activite activite, int prix, string devise);
    Activite activite;
};
