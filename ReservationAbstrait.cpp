#include "ReservationAbstrait.hpp"
#include "IterateurPlanification.hpp"

IterateurPlanification ReservationAbstrait::creerIterateur(shared_ptr<ReservationAbstrait> reservation) {
    return { reservation };
}
