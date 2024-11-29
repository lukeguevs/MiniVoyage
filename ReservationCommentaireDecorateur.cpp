#include "ReservationCommentaireDecorateur.hpp"


void ReservationCommentaireDecorateur::ajouterCommentaire(shared_ptr<Commentaire> commentaire) {
    commentaires.push_back(commentaire);
}
void ReservationCommentaireDecorateur::retirerCommentaire(shared_ptr<Commentaire> commentaire) {
    for (auto i = commentaires.size() - 1; i >= 0; i--) {
        if (commentaires[i].get() == commentaire.get()) commentaires.erase(commentaires.begin() + i);
    }
}
