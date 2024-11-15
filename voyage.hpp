#pragma once
#include <vector>
#include "ReservationAbstrait.hpp"
#include "Voyageur.hpp"
#include "ReservationComposite.hpp"

// la classe voyage pourrait très bien être une sous-classe de Reservation Composite.
class Voyage {
private:
    ReservationComposite reservations;
    
public:
    Voyage(string nom, Voyageur voyageur);
    void ajouterReservation(shared_ptr<ReservationAbstrait> reservation);
    Voyageur voyageur;
    string nom;
};
