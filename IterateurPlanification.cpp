#include "IterateurPlanification.hpp"

IterateurPlanification::IterateurPlanification(shared_ptr<ReservationAbstrait> parent){
    reservations.push_back(parent);
};


bool IterateurPlanification::estFin()
{
    return reservations.size() == 0;
}

void IterateurPlanification::suivant()
{
    if (!estFin()) reservations.erase(reservations.begin());
    
    while (reservations.size() > 0 && dynamic_pointer_cast<ReservationComposite>(reservations[0]))
    {
        shared_ptr<ReservationComposite> composite = dynamic_pointer_cast<ReservationComposite>(reservations[0]);
        for (auto element : composite->reservations)
        {
            reservations.push_back(element);
        }
        reservations.erase(reservations.begin());
    }
}

shared_ptr<ReservationElementaire> IterateurPlanification::obtenirPremier(){
    if (estFin()) return nullptr;
    reservations.insert(reservations.begin(), nullptr);
    if (!dynamic_pointer_cast<ReservationElementaire>(reservations[0])) suivant();
    if (estFin()) return nullptr;
    return dynamic_pointer_cast<ReservationElementaire>(reservations[0]);
}

shared_ptr<ReservationElementaire> IterateurPlanification::obtenirSelection()
{
    if (estFin()) return nullptr;
    return dynamic_pointer_cast<ReservationElementaire>(reservations[0]);
}
