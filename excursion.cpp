#include "Excursion.hpp"

Excursion::Excursion(Activite activite, int prix, string devise) : activite(activite), OffreReservationAbstrait(activite.nom, prix, devise) {};
