#include <iostream>
#include "Voyage.hpp"
#include "BDOR.hpp"
#include "BDP.hpp"
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
    BDP bdp;

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
    //Étape 2
    Voyageur dora {"Dora"};
    Voyage v1 {"Voyage de Dora", dora};
    
    //France pt1
    shared_ptr<Segment> segmentFrance1 = make_shared<Segment>("France 1ère partie");
    shared_ptr<Journee> journee1026 = make_shared<Journee>("2024-10-26");

    v1.ajouterReservation(segmentFrance1);
    segmentFrance1->ajouterReservation(journee1026);
    shared_ptr<ReservationElementaire> volDora = make_shared<ReservationElementaire>(transports[0], Moment("2024-10-26"), bdp);
    journee1026->ajouterReservation(volDora);
    

    shared_ptr<Journee> journee1027 = make_shared<Journee>("2024-10-27");

    segmentFrance1->ajouterReservation(journee1027);
    shared_ptr<ReservationElementaire> hotelStella = make_shared<ReservationElementaire>(hebergements[0], Moment("2024-10-27"), bdp);
    journee1027->ajouterReservation(hotelStella);

    shared_ptr<Journee> journee1028 = make_shared<Journee>("2024-10-28");
    Moment moment1028("2024-10-28");
    segmentFrance1->ajouterReservation(journee1028);
    shared_ptr<ReservationElementaire> parisDîner = make_shared<ReservationElementaire>(excursions[0], moment1028, bdp);
    journee1028->ajouterReservation(parisDîner);
    shared_ptr<ReservationElementaire> hotelStella2 = make_shared<ReservationElementaire>(hebergements[0], moment1028, bdp);
    journee1028->ajouterReservation(hotelStella2);


    //Segment Portugal
    shared_ptr<Segment> segmentPortugal = make_shared<Segment>("Portugal");
    shared_ptr<Journee> journee1029 = make_shared<Journee>("2024-10-29");
    v1.ajouterReservation(segmentPortugal);
    segmentPortugal->ajouterReservation(journee1029);
    Moment moment1029("2024-10-29");
    shared_ptr<ReservationElementaire> volPortugal = make_shared<ReservationElementaire>(transports[4], moment1029, bdp);
    journee1029->ajouterReservation(volPortugal);

    shared_ptr<ReservationElementaire> hotelRoma = make_shared<ReservationElementaire>(hebergements[1], moment1029, bdp);
    journee1029->ajouterReservation(hotelRoma);

    shared_ptr<Journee> journee1030 = make_shared<Journee>("2024-10-30");
    segmentPortugal->ajouterReservation(journee1030);
    Moment moment1030("2024-10-30");
    shared_ptr<ReservationElementaire> visiteMusee = make_shared<ReservationElementaire>(excursions[3], moment1030, bdp);
    journee1030->ajouterReservation(visiteMusee);
    shared_ptr<ReservationElementaire> hotelRoma2 = make_shared<ReservationElementaire>(hebergements[1], moment1030, bdp);
    journee1030->ajouterReservation(hotelRoma2);

    Moment moment1031("2024-10-31");
    shared_ptr<ReservationElementaire> volRetourEasyJet = make_shared<ReservationElementaire>(transports[10], moment1031, bdp);
    shared_ptr<Journee> journee1031Portugal = make_shared<Journee>(moment1031.date);
    segmentPortugal->ajouterReservation(journee1031Portugal);
    journee1031Portugal->ajouterReservation(volRetourEasyJet);
    
    //Segment france2
    shared_ptr<Segment> segmentFrance2 = make_shared<Segment>("France 2e partie");
    shared_ptr<Journee> journee1031 = make_shared<Journee>(moment1031.date);
    v1.ajouterReservation(segmentFrance2);
    segmentFrance2->ajouterReservation(journee1031);
    shared_ptr<ReservationElementaire> hotelStella3 = make_shared<ReservationElementaire>(hebergements[0], moment1031, bdp);
    journee1031->ajouterReservation(hotelStella3);

    Moment moment1101("2024-11-01");
    shared_ptr<Journee> journee1101 = make_shared<Journee>(moment1101.date);
    segmentFrance2->ajouterReservation(journee1101);
    shared_ptr<ReservationElementaire> visiteLouvre = make_shared<ReservationElementaire>(excursions[1], moment1101, bdp);
    journee1101->ajouterReservation(visiteLouvre);
    shared_ptr<ReservationElementaire> hotelStella4 = make_shared<ReservationElementaire>(hebergements[0], moment1101, bdp);
    journee1101->ajouterReservation(hotelStella4);

    Moment moment1102("2024-11-02");
    shared_ptr<Journee> journee1102 = make_shared<Journee>(moment1102.date);
    segmentFrance2->ajouterReservation(journee1102);
    shared_ptr<ReservationElementaire> visiteVersailles = make_shared<ReservationElementaire>(excursions[2], moment1102, bdp);
    journee1102->ajouterReservation(visiteVersailles);
    shared_ptr<ReservationElementaire> hotelStella5 = make_shared<ReservationElementaire>(hebergements[0], moment1102, bdp);
    journee1102->ajouterReservation(hotelStella5);

    Moment moment1103("2024-11-03");
    shared_ptr<Journee> journee1103 = make_shared<Journee>(moment1103.date);
    segmentFrance2->ajouterReservation(journee1103);
    shared_ptr<ReservationElementaire> volAirTransatFrance = make_shared<ReservationElementaire>(transports[11], moment1103, bdp);
    journee1103->ajouterReservation(volAirTransatFrance);

    Voyageur diego{"Diego"};
    Voyage v2{"Voyage de Diego", diego, v1};
    v2.retirerReservation(segmentPortugal);

    shared_ptr<Segment> segmentEspagne = make_shared<Segment>("Espagne");
    v2.ajouterReservation(segmentEspagne);  

    shared_ptr<Journee> journee1029Diego = make_shared<Journee>(moment1029.date);
    segmentEspagne->ajouterReservation(journee1029Diego);
    shared_ptr<ReservationElementaire> volAirEuropa1025 = make_shared<ReservationElementaire>(transports[12], moment1029, bdp);
    journee1029Diego->ajouterReservation(volAirEuropa1025);
    shared_ptr<ReservationElementaire> farHomeAtocha = make_shared<ReservationElementaire>(hebergements[2], moment1029, bdp);
    journee1029Diego->ajouterReservation(farHomeAtocha);

    shared_ptr<Journee> journee1030Diego = make_shared<Journee>(moment1030.date);
    segmentEspagne->ajouterReservation(journee1030Diego);
    shared_ptr<ReservationElementaire> excursionTolede = make_shared<ReservationElementaire>(excursions[4], moment1030, bdp);
    journee1030Diego->ajouterReservation(excursionTolede);
    farHomeAtocha->momentAchat.date = moment1030.date;
    journee1030Diego->ajouterReservation(farHomeAtocha);

    shared_ptr<Journee> journee1031Diego = make_shared<Journee>(moment1031.date);
    segmentEspagne->ajouterReservation(journee1031Diego);
    shared_ptr<ReservationElementaire> volAirEuropa1026 = make_shared<ReservationElementaire>(transports[13], moment1031, bdp);
    journee1031Diego->ajouterReservation(volAirEuropa1026);

    Voyageur alicia{"Alicia"};
    Voyage v3{"Voyage d'Alicia", alicia, v2};
    v1.afficherTotal();
    v2.afficherTotal();
    v3.afficherTotal();
}
