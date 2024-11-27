#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "ReservationAbstrait.hpp"
using namespace std;

class Voyage;

class ReservationComposite : public ReservationAbstrait{
public:
    vector<shared_ptr<ReservationAbstrait>> reservations;
    ReservationComposite(string nom, string type, bool masculin);
    ReservationComposite(ReservationComposite& source);
    void ajouterReservation(shared_ptr<ReservationAbstrait> reservation);
    void retirerReservation(string nomReservation);
    void creerReservation(ReservationComposite* parent, shared_ptr<ReservationAbstrait> element);
    void definirVoyage(Voyage* voyage);
    string type = "";
    bool masculin;
};
