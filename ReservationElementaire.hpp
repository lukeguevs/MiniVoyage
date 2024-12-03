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

class ReservationElementaire : public ReservationAbstrait
{
private:
    Vendeur vendeur;
    shared_ptr<BDP> baseDePlanif;
    static double conversionEuroCad;

public:
    ReservationElementaire() = default;
    ReservationElementaire(ReservationElementaire &source);
    ReservationElementaire(shared_ptr<OffreReservationAbstrait> offre, Moment momentAchat, BDP bdp);
    void setVendeur(Vendeur vendeur);
    Vendeur getVendeur();
    Moment momentAchat;
    shared_ptr<OffreReservationAbstrait> offre;
    string afficher();
    void creerReservation(ReservationComposite *parent, shared_ptr<ReservationAbstrait> element);
    void retirerReservation(string nomReservation);
    int obtenirOffreCad();
    static void changeConversionEuroCad(double conversion);
    void annuler();
};
