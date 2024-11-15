#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "OffreReservationAbstrait.hpp"
#include "Hotel.hpp"

using namespace std;

class Hebergement : public OffreReservationAbstrait{
public:
    Hebergement(Hotel hotel, int prix, string devise);
    Hotel hotel;
};
