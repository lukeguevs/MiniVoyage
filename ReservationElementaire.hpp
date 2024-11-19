#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "OffreReservationAbstrait.hpp"
#include "Moment.hpp"
#include "ReservationAbstrait.hpp"
#include "ReservationComposite.hpp"
#include "Voyage.hpp"
#include <memory>
using namespace std;

class ReservationElementaire : public ReservationAbstrait{
private:
    shared_ptr<const OffreReservationAbstrait> offre;
public:
    ReservationElementaire(shared_ptr<const OffreReservationAbstrait> offre, Moment momentAchat);
    Moment momentAchat;
    void creerReservation(ReservationComposite* parent);
    void retirerReservation(shared_ptr<ReservationAbstrait> reservation);
    int conversionEUROCAN(shared_ptr< const OffreReservationAbstrait> offre);
    };
