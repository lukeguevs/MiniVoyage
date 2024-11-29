//
#include "PrixRegulierStrategie.hpp"
#include "OffreReservationAbstrait.hpp"

PrixRegulierStrategie::PrixRegulierStrategie(OffreReservationAbstrait* contexte) : PrixStrategieAbstrait(contexte) {}

int PrixRegulierStrategie::obtenirPrix() const{
    return contexte->prix;
}

