#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "ReservationAbstrait.hpp"
using namespace std;

class Voyage;

class ReservationComposite : public ReservationAbstrait
{
public:
    vector<shared_ptr<ReservationAbstrait>> reservations;
    ReservationComposite(string nom);
    void ajouterReservation(shared_ptr<ReservationAbstrait> reservation);
    void retirerReservation(shared_ptr<ReservationAbstrait> reservation);
    void creerReservation(ReservationComposite *parent);
    string nom;
};
