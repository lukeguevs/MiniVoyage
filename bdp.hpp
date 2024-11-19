#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "OffreReservationAbstrait.hpp"
#include "Vendeur.hpp"
#include "BDAbstrait.hpp"
#include "ReservationElementaire.hpp"
using namespace std;

class ReservationElementaire;

struct Transaction{
    shared_ptr<const OffreReservationAbstrait> reservation;
    string dateAchat;
    Vendeur vendeur;
};

class BDP: public BDAbstrait<Transaction> {
public:
    BDP() = default;
    shared_ptr<Transaction> createObjectFromRow(vector<string> row);
};
