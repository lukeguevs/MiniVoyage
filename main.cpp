#include <iostream>
#include "Voyage.hpp"
#include "BDOR.hpp"
#include "BDTransport.hpp"
#include "BDHebergement.hpp"
#include "BDExcursion.hpp"


using namespace std;

int main(){
   BDOR bdor;
    
    BDTransport bdTransport;
    bdor.ajouterCategorie("transport", bdTransport);
   
    BDHebergement bdHebergement;
    bdor.ajouterCategorie("hebergement", bdHebergement);
   
    BDExcursion bdExcursion;
    bdor.ajouterCategorie("excursion", bdExcursion);
    bdHebergement.loadFrom("vol.csv");
}
