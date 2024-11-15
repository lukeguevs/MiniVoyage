#include "LigneTransport.hpp"

LigneTransport::LigneTransport(
    string nom,
    string numero,
    string destinationDepart,
    string destinationFin,
    Moment momentDepart,
    Moment momentFin,
    Avion vehicule
) :
    nom(nom),
    numero(numero),
    destinationDepart(destinationDepart),
    destinationFin(destinationFin),
    momentDepart(momentDepart),
    momentFin(momentFin),
    vehicule(vehicule)
{}
