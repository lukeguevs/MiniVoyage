#include <iostream>
#include "Voyage.hpp"
#include "BDOR.hpp"
#include "BDTransport.hpp"
#include "BDHebergement.hpp"
#include "BDExcursion.hpp"
#include "Transport.hpp"
#include "ReservationElementaire.hpp"
#include "Segment.hpp"
#include "Journee.hpp"


using namespace std;

int main(){
    
//    Étape 1
    BDOR bdor;
    
    bdor.ajouterCategorie("transport", make_shared<BDTransport>());
    bdor.ajouterCategorie("hebergement", make_shared<BDHebergement>());
    bdor.ajouterCategorie("excursion", make_shared<BDExcursion>());
    
    vector<shared_ptr<OffreReservationAbstrait>> transports = bdor.obtenirCategorie("transport")->loadFrom("./data/vol.csv");
    vector<shared_ptr<OffreReservationAbstrait>> hebergements = bdor.obtenirCategorie("hebergement")->loadFrom("./data/hebergement.csv");
    vector<shared_ptr<OffreReservationAbstrait>> excursion = bdor.obtenirCategorie("excursion")->loadFrom("./data/excursion.csv");
    
    bdor.obtenirCategorie("transport")->ajouterEntree(transports[0]);
    bdor.obtenirCategorie("hebergement")->ajouterEntree(hebergements[0]);
    bdor.obtenirCategorie("excursion")->ajouterEntree(excursion[0]);
    bdor.obtenirCategorie("transport")->ajouterEntree(transports[4]);
    bdor.obtenirCategorie("hebergement")->ajouterEntree(hebergements[1]);
    bdor.obtenirCategorie("excursion")->ajouterEntree(excursion[3]);
    bdor.obtenirCategorie("transport")->ajouterEntree(transports[10]);
    bdor.obtenirCategorie("hebergement")->ajouterEntree(hebergements[0]);
    bdor.obtenirCategorie("excursion")->ajouterEntree(excursion[1]);
    bdor.obtenirCategorie("excursion")->ajouterEntree(excursion[2]);
    bdor.obtenirCategorie("transport")->ajouterEntree(transports[11]);
    
    cout << endl;
//    Étape 2
    Voyageur dora {"Dora"};
    Voyage v1 {"Voyage de Dora", dora};
    
    shared_ptr<Segment> segmentFrance1 = make_shared<Segment>("France 1ère partie");
    shared_ptr<Journee> journee1026 = make_shared<Journee>("2024-10-26");

    v1.ajouterReservation(segmentFrance1);
    segmentFrance1->ajouterReservation(journee1026);
    
}
