#pragma once
#include <vector>
#include "ReservationAbstrait.hpp"
#include "Voyageur.hpp"
#include "ReservationComposite.hpp"

// la classe voyage pourrait très bien être une sous-classe de Reservation Composite.
class Voyage {
private:
    
public:
    shared_ptr<ReservationComposite> reservations;
    Voyage(string nom, Voyageur voyageur, const Voyage& voyage);
    Voyage(string nom, Voyageur voyageur);
    void ajouterReservation(shared_ptr<ReservationAbstrait> reservation);
    void retirerReservation(string nomReservation);
    void afficherTotal();
    Voyageur voyageur;
    string nom;
};
