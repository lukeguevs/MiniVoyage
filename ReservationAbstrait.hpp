#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "IterateurPlanification.hpp"
using namespace std;

class IterateurPlanification;

class ReservationComposite;

class ReservationAbstrait {
public:
    ReservationAbstrait *parent = nullptr;
    virtual void creerReservation(ReservationComposite* parent) = 0;
    virtual void retirerReservation(shared_ptr<ReservationAbstrait> reservation) = 0;
    int total = 0;
    int profondeur = 0;
    string nomVoyage = "";
    IterateurPlanification creerIterateur();

protected:
    ReservationAbstrait() = default;
    virtual ~ReservationAbstrait() = default;
};
