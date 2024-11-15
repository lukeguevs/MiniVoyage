#include "ReservationComposite.hpp"

class Segment : public ReservationComposite {
public:
    Segment(string nom);
    void creerReservation(ReservationComposite* parent);
};
