#include "IterateurAbstrait.hpp"
#include "ReservationElementaire.hpp"

class IterateurPlanification : public IterateurAbstrait<shared_ptr<ReservationElementaire>>
{

public:
    IterateurPlanification(shared_ptr<ReservationAbstrait> reservation) = default;
    bool estPremier();
    bool estFin();
    void suivant();
    void precedent();
    shared_ptr<ReservationElementaire> obtenirPremier();
    shared_ptr<ReservationElementaire> obtenirSelection();

private:
    vector<shared_ptr<ReservationAbstrait>> reservations;
};