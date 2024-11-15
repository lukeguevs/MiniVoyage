#include <iostream>
#include "Voyage.hpp"
#include "BDOR.hpp"
#include "BDTransport.hpp"
#include "BDHebergement.hpp"
#include "BDExcursion.hpp"
#include "Transport.hpp"


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
    
//    Étape 2
    
}
