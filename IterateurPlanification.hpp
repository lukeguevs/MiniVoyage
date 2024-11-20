#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "ReservationElementaire.hpp"
#include "IterateurAbstrait.hpp"

using namespace std;

class IterateurPlanification : public IterateurAbstrait<shared_ptr<ReservationElementaire>>{
public:
    IterateurPlanification(shared_ptr<ReservationAbstrait> parent);
    virtual ~IterateurPlanification() = default;
    bool estFin();
    void suivant();
    shared_ptr<ReservationElementaire> obtenirPremier();
    shared_ptr<ReservationElementaire> obtenirSelection();

private:
    vector<shared_ptr<ReservationAbstrait>> reservations;
};
