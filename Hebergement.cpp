#include "Hebergement.hpp"

Hebergement::Hebergement(Hotel hotel, int prix, string devise) : OffreReservationAbstrait(hotel.nom, prix, devise), hotel(hotel) {};
