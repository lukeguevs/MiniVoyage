#pragma once
#include "OffreReservationAbstrait.hpp"
#include "Commentaire.hpp"
#include <memory>
#include <vector>

class OffreDeReservationDecorateur : public OffreReservationAbstrait
{

public:
    vector<shared_ptr<Commentaire>> commentaires;
    shared_ptr<OffreReservationAbstrait> reservation;

    void ajouterCommentaire(shared_ptr<Commentaire> commentaire);
    void retirerCommentaire(shared_ptr<Commentaire> commentaire);
    OffreDeReservationDecorateur(shared_ptr<OffreReservationAbstrait> reservation);

    static shared_ptr<OffreDeReservationDecorateur> transformerEnDecorateur(shared_ptr<OffreReservationAbstrait> &res);
};