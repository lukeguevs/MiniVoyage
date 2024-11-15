#include "ReservationComposite.hpp"

class Journee : public ReservationComposite {
public:
    Journee(string nom);
    void creerReservation(ReservationComposite* parent);
};
