#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "ReservationDecorateurAbstrait.hpp"
#include "IterateurPlanification.hpp"

using namespace std;


class ReservationModificationDecorateur : public ReservationDecorateurAbstrait {
private:
    vector<shared_ptr<ReservationElementaire>> modifications;

public:
    ReservationModificationDecorateur(shared_ptr<ReservationElementaire> reservation);
    vector<shared_ptr<ReservationElementaire>> getModifications();
    void ajouterModification(shared_ptr<ReservationElementaire> modification);
    void retirerReservation(string nomReservation) override;
    void retirerModification(shared_ptr<ReservationElementaire> modification);
    static shared_ptr<ReservationModificationDecorateur> transformerEnDecorateur( vector<shared_ptr<ReservationAbstrait>>& reservations, shared_ptr<ReservationAbstrait> res);
    static void changerReservationVoyage(shared_ptr<Voyage>& voyage, shared_ptr<ReservationElementaire> res);
    string afficher();
    shared_ptr<ReservationAbstrait> reservation;
    void annuler();
};
