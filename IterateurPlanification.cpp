#include "IterateurPlanification.hpp"

IterateurPlanification::IterateurPlanification(shared_ptr<ReservationAbstrait> reservation)
{
    reservations.push_back(reservation);
}

bool IterateurPlanification::estFin()
{
    return reservations.size == 0;
}

void IterateurPlanification::suivant()
{
    while (!dynamic_pointer_cast<ReservationComposite>(reservations[0]))
    {
        shared_ptr<ReservationComposite> composite = dynamic_pointer_cast<ReservationComposite>(reservations[0]);
        for (auto element : composite->reservations)
        {
            reservations.push_back(element);
        }
        reservations.erase(reservations.begin());
    }
}

shared_ptr<ReservationElementaire> IterateurPlanification::obtenirPremier()
{
    suivant();
    return reservations[0];
}

shared_ptr<ReservationElementaire> IterateurPlanification::obtenirSelection()
{
    return reservations[0];
}