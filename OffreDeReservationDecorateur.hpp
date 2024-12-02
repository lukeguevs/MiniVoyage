
#include "OffreReservationAbstrait.hpp"
#include "Commentaire.hpp"

class OffreDeReservationDecorateur : public OffreReservationAbstrait{

    public:
        shared_ptr<Commentaire> commentaires;
        shared_ptr<OffreReservationAbstrait> reservation;

        void ajouterCommentaire(shared_ptr<Commentaire> commentaire);
        void retirerCommentaire(shared_ptr<Commentaire> commentaire);

        
}