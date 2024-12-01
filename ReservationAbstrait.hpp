#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;
class ReservationComposite;
class IterateurPlanification;
class Voyage;


class ReservationAbstrait {
public:
    virtual void creerReservation(ReservationComposite* parent, shared_ptr<ReservationAbstrait> element) = 0;
    virtual void retirerReservation(string nomReservation) = 0;
    virtual void definirVoyage(Voyage* voyage);
    static IterateurPlanification creerIterateur(shared_ptr<ReservationAbstrait> reservation);
    ReservationAbstrait *parent = nullptr;
    int profondeur = 0;
    string nom = "";
    Voyage* voyage;
protected:
    virtual ~ReservationAbstrait() = default;
    ReservationAbstrait() = default;

};
