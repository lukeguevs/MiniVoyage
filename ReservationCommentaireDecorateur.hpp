#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "ReservationDecorateurAbstrait.hpp"
#include "Commentaire.hpp"

using namespace std;

class ReservationCommentaireDecorateur : public ReservationDecorateurAbstrait {
private:
    vector<shared_ptr<Commentaire>> commentaires;
public:
    void ajouterCommentaire(shared_ptr<Commentaire> commentaire);
    void retirerCommentaire(shared_ptr<Commentaire> commentaire);
    
};
