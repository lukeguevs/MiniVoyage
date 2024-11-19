#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "BDAbstrait.hpp"
#include "BDP.hpp"
#include "OffreReservationAbstrait.hpp"
#include "Moment.hpp"
#include "ReservationAbstrait.hpp"
#include "ReservationComposite.hpp"
#include "Voyage.hpp"
#include <memory>
using namespace std;

class BDP;

class ReservationElementaire : public ReservationAbstrait{
private:
    Vendeur vendeur;
    shared_ptr<const OffreReservationAbstrait> offre;
    shared_ptr<BDP> baseDePlanif;
public:
    void setVendeur(Vendeur vendeur);
    Vendeur getVendeur();
    ReservationElementaire(shared_ptr<const OffreReservationAbstrait> offre, Moment momentAchat, BDP bdp);
    Moment momentAchat;
    void creerReservation(ReservationComposite* parent);
    void retirerReservation(shared_ptr<ReservationAbstrait> reservation);
    int conversionEUROCAN(shared_ptr< const OffreReservationAbstrait> offre);
    };
