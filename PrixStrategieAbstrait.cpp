//
#include "PrixStrategieAbstrait.hpp"

PrixStrategieAbstrait::PrixStrategieAbstrait(OffreReservationAbstrait* contexte) : contexte(contexte) {};
void PrixStrategieAbstrait::etablirContexte(OffreReservationAbstrait* contexte) {
    this->contexte = contexte;
};

PrixStrategieAbstrait::PrixStrategieAbstrait() {};
