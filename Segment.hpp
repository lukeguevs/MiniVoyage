#include "ReservationComposite.hpp"

class Segment : public ReservationComposite {
public:
    ~Segment();
    Segment(string nom);
    void creerReservation(ReservationComposite* parent);
};
