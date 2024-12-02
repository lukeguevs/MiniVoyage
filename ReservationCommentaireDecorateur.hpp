#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "ReservationDecorateurAbstrait.hpp"
#include "Commentaire.hpp"
#include "ReservationElementaire.hpp"
#include "ReservationModificationDecorateur.hpp"

using namespace std;

class ReservationCommentaireDecorateur : public ReservationDecorateurAbstrait {
private:
    vector<shared_ptr<Commentaire>> commentaires;
public:
    vector<shared_ptr<Commentaire>> getCommentaires();
    void ajouterCommentaire(shared_ptr<Commentaire> commentaire);
    void retirerCommentaire(shared_ptr<Commentaire> commentaire);
    static shared_ptr<ReservationCommentaireDecorateur> transformerEnDecorateur(
        vector<shared_ptr<ReservationAbstrait>> &reservations, shared_ptr<ReservationAbstrait> res);
    ReservationCommentaireDecorateur(shared_ptr<ReservationElementaire> res);
    ReservationCommentaireDecorateur(shared_ptr<ReservationModificationDecorateur> res);

    string afficher();
    shared_ptr<ReservationAbstrait> reservation;
};
