#include "ReservationCommentaireDecorateur.hpp"

ReservationCommentaireDecorateur::ReservationCommentaireDecorateur(shared_ptr<ReservationElementaire> res) : ReservationDecorateurAbstrait(res), reservation(res){
}

ReservationCommentaireDecorateur::ReservationCommentaireDecorateur(shared_ptr<ReservationModificationDecorateur> res) : ReservationDecorateurAbstrait(res), reservation(res) {}

void ReservationCommentaireDecorateur::ajouterCommentaire(shared_ptr<Commentaire> commentaire) {
    commentaires.push_back(commentaire);
}
void ReservationCommentaireDecorateur::retirerCommentaire(shared_ptr<Commentaire> commentaire) {
    for (auto i = commentaires.size() - 1; i >= 0; i--) {
        if (commentaires[i].get() == commentaire.get()) commentaires.erase(commentaires.begin() + i);
    }
}

shared_ptr<ReservationCommentaireDecorateur> ReservationCommentaireDecorateur::transformerEnDecorateur(
        vector<shared_ptr<ReservationAbstrait>>& reservations, shared_ptr<ReservationAbstrait> res) 
        {
            for (auto& reservation : reservations) {
            if (reservation == res) {

            if ( auto reservationElem = dynamic_pointer_cast<ReservationModificationDecorateur>(reservation)) {
                auto reservationDeco = make_shared<ReservationCommentaireDecorateur>(reservationElem);
                reservation = reservationDeco;
                return reservationDeco;
            }

            else if (auto reservationElem2 = dynamic_pointer_cast<ReservationElementaire>(reservation)){

            auto reservationDeco = make_shared<ReservationCommentaireDecorateur>(reservationElem);
                reservation = reservationDeco;
                return reservationDeco;
            }
        }
    }
        return nullptr;
}

vector<shared_ptr<Commentaire>> ReservationCommentaireDecorateur::getCommentaires(){
    return commentaires;
}  

string ReservationCommentaireDecorateur::afficher(){
    reservation->afficher();
    string returnVal = "";
    for (auto comment : commentaires){
        cout << "    Commentaire: " << comment->getTexte() << "." << endl;
        returnVal += "    Commentaire: " + comment->getTexte() + ".\n";
    }
    return returnVal;
}

void ReservationCommentaireDecorateur::annuler(){
    reservation->annuler();
    commentaires.clear();
}