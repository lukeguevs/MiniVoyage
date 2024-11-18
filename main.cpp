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
    vector<shared_ptr<OffreReservationAbstrait>> excursions = bdor.obtenirCategorie("excursion")->loadFrom("./data/excursion.csv");
    
    for (auto transport : transports) bdor.obtenirCategorie("transport")->ajouterEntree(transport);
    for (auto hebergement : hebergements) bdor.obtenirCategorie("hebergement")->ajouterEntree(hebergement);
    for (auto excursion : excursions) bdor.obtenirCategorie("excursion")->ajouterEntree(excursion);
    
    cout << endl;
//    Étape 2
    Voyageur dora {"Dora"};
    Voyage v1 {"Voyage de Dora", dora};
    
    //France pt1
    shared_ptr<Segment> segmentFrance1 = make_shared<Segment>("France 1ère partie");
    shared_ptr<Journee> journee1026 = make_shared<Journee>("2024-10-26");

    v1.ajouterReservation(segmentFrance1);
    segmentFrance1->ajouterReservation(journee1026);
    shared_ptr<ReservationElementaire> volDora = make_shared<ReservationElementaire>(transports[0], Moment("2024-10-26"));
    journee1026->ajouterReservation(volDora);

    shared_ptr<Journee> journee1027 = make_shared<Journee>("2024-10-27");

    segmentFrance1->ajouterReservation(journee1027);
    shared_ptr<ReservationElementaire> hotelStella = make_shared<ReservationElementaire>(hebergements[0], Moment("2024-10-27"));
    journee1027->ajouterReservation(hotelStella);

    shared_ptr<Journee> journee1028 = make_shared<Journee>("2024-10-28");
    segmentFrance1->ajouterReservation(journee1028);
    shared_ptr<ReservationElementaire> parisDîner = make_shared<ReservationElementaire>(excursions[0], Moment("2024-10-28"));
    journee1028->ajouterReservation(parisDîner);
    hotelStella->momentAchat.date = parisDîner->momentAchat.date;
    journee1028->ajouterReservation(hotelStella);


    //Partie Portugal
    shared_ptr<Segment> segmentPortugal = make_shared<Segment>("Segment Portugal");
    shared_ptr<Journee> journee1029 = make_shared<Journee>("2024-10-29");
    v1.ajouterReservation(segmentPortugal);
    segmentPortugal->ajouterReservation(journee1029);
    Moment moment1029("2024-10-29");
    shared_ptr<ReservationElementaire> volPortugal = make_shared<ReservationElementaire>(transports[5], moment1029);
    journee1029->ajouterReservation(volPortugal);

    shared_ptr<ReservationElementaire> hotelRoma = make_shared<ReservationElementaire>(hebergements[1], moment1029);
    journee1029->ajouterReservation(hotelRoma);

    shared_ptr<Journee> journee1030 = make_shared<Journee>("2024-10-30");
    segmentPortugal->ajouterReservation(journee1030);
    Moment moment1030("2024-10-30");
    shared_ptr<ReservationElementaire> visiteMusee = make_shared<ReservationElementaire>(excursions[3], moment1030);
    journee1030->ajouterReservation(visiteMusee);
    hotelRoma->momentAchat.date = moment1030.date;
    journee1030->ajouterReservation(hotelRoma);

    shared_ptr<Journee> journee1031 = make_shared<Journee>("2024-10-31");
    shared_ptr<ReservationElementaire> volRetourEasyJet = make_shared<ReservationElementaire>(transports[10], Moment("2024-10-31"));
    segmentPortugal->ajouterReservation(journee1031);
    journee1031->ajouterReservation(volRetourEasyJet);

    shared_ptr<Segment> segmentFrance2 = make_shared<Segment>("France 2e partie");
    v1.ajouterReservation(segmentFrance2);

    Moment moment1101("2024-11-01");
    shared_ptr<Journee> journee1101 = make_shared<Journee>(moment1101.date);
    segmentFrance2->ajouterReservation(journee1101);
    shared_ptr<ReservationElementaire> visiteLouvre = make_shared<ReservationElementaire>(excursions[1], moment1101);
    journee1101->ajouterReservation(visiteLouvre);
    hotelStella->momentAchat.date = moment1101.date;
    journee1101->ajouterReservation(hotelStella);

    Moment moment1102("2024-11-02");
    shared_ptr<Journee> journee1102 = make_shared<Journee>(moment1102.date);
    segmentFrance2->ajouterReservation(journee1102);
    shared_ptr<ReservationElementaire> visiteVersailles = make_shared<ReservationElementaire>(excursions[2], moment1102);
    journee1102->ajouterReservation(visiteVersailles);
    hotelStella->momentAchat.date = moment1102.date;
    journee1102->ajouterReservation(hotelStella);

    Moment moment1103("2024-11-03");
    shared_ptr<Journee> journee1103 = make_shared<Journee>(moment1103.date);
    segmentFrance2->ajouterReservation(journee1103);
    shared_ptr<ReservationElementaire> volAirTransatFrance = make_shared<ReservationElementaire>(transports[11], moment1103);
    journee1103->ajouterReservation(volAirTransatFrance);

    Voyageur diego{"Diego"};
    Voyage v2{"Voyage de Diego", diego, v1};
}
