#include "ReservationComposite.hpp"

class Journee : public ReservationComposite {
public:
    Journee(string nom);
    void creerReservation(ReservationComposite* parent);
    void retirerReservation(shared_ptr<ReservationAbstrait> reservation);
};
