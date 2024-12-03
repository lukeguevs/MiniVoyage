
#include "PrixRabaisStrategie.hpp"
#include "OffreReservationAbstrait.hpp"


PrixRabaisStrategie::PrixRabaisStrategie(double rabais) : rabais(rabais) {
}

double PrixRabaisStrategie::obtenirChangement() const{
    return (1.0 - rabais);
}