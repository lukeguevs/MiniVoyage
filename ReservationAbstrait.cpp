#include "ReservationAbstrait.hpp"

IterateurPlanification ReservationAbstrait::creerIterateur()
{
    return IterateurPlanification(make_shared<ReservationAbstrait>(*this));
}