
#include "PrixRabaisStrategie.hpp"
#include "OffreReservationAbstrait.hpp"


PrixRabaisStrategie::PrixRabaisStrategie(OffreReservationAbstrait* contexte, double rabais) : PrixStrategieAbstrait(contexte), rabais(rabais) {
}

int PrixRabaisStrategie::obtenirPrix() const{
    return contexte->prix * (1.0 - rabais);
}