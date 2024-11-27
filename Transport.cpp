#include "Transport.hpp"

Transport::Transport(
    LigneTransport ligne,
    string classe,
    int prix,
    string devise
) :
OffreReservationAbstrait(ligne.nom, prix, devise),
    ligne(ligne),
    classe(classe)
{};
