#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class ReservationComposite;

class ReservationAbstrait {
public:
    virtual void creerReservation(ReservationComposite* parent) = 0;
    int profondeur = 0;
protected:
    ReservationAbstrait() = default;
    virtual ~ReservationAbstrait() = default;
};
