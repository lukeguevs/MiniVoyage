#include "Voyage.hpp"
#include "IterateurPlanification.hpp"

Voyage::Voyage(string nom, Voyageur voyageur) :
    voyageur(voyageur), nom(nom) {
    reservations = make_shared<ReservationComposite>(nom, "", true);
    cout << nom << " cree!" << endl;
};

Voyage::Voyage(string nom, Voyageur voyageur, const Voyage& voyage) : voyageur(voyageur), nom(nom)
{
    reservations = make_shared<ReservationComposite>(*voyage.reservations);
    reservations->nom = nom;
    reservations->definirVoyage(this);
    cout << nom  << " copie a partir du " << voyage.nom << "!" << endl;
}

void Voyage::ajouterReservation(shared_ptr<ReservationAbstrait> reservation) {
    reservations->definirVoyage(this);
    reservations->ajouterReservation(reservation);
}

void Voyage::retirerReservation(string nomReservation){
    reservations->retirerReservation(nomReservation);
}

void Voyage::afficherTotal(){
    IterateurPlanification iterateur = ReservationAbstrait::creerIterateur(reservations);
    shared_ptr<ReservationElementaire> reservation = iterateur.obtenirPremier();
    
    int total = 0;
    while (reservation != nullptr) {
        total += reservation->obtenirOffreCad();
        iterateur.suivant();
        reservation = iterateur.obtenirSelection();
    }
    
    cout << "Total des frais pour le " << nom << " ($ CA): " << total << endl;
}
