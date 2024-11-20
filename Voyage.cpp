#include "Voyage.hpp"
#include "IterateurPlanification.hpp"

Voyage::Voyage(string nom, Voyageur voyageur) :
    voyageur(voyageur), nom(nom) {
    reservations = make_shared<ReservationComposite>(nom);
    cout << nom << " cree!" << endl;
    reservations->nomVoyage = nom;
};
Voyage::Voyage(string nom, Voyageur voyageur, const Voyage& voyage) : voyageur(voyageur), reservations(voyage.reservations), nom(nom)
{
    reservations->nom = nom;
    reservations->nomVoyage = nom;
    cout << nom  << " copie a partir du " << voyage.nom << "!" << endl;
}

void Voyage::ajouterReservation(shared_ptr<ReservationAbstrait> reservation) {
    reservations->ajouterReservation(reservation);
}

void Voyage::retirerReservation(shared_ptr<ReservationAbstrait> reservation){
    reservations->retirerReservation(reservation);
}

void Voyage::afficherTotal(){
    IterateurPlanification iterateur = ReservationAbstrait::creerIterateur(reservations);
    shared_ptr<ReservationElementaire> reservation = iterateur.obtenirPremier();
    cout << "Total des frais pour le " << nom << "($ CA) : " << total << endl;
}
