#include "BDTransport.hpp"
#include <iostream>
#include "BDCategorieAbstrait.hpp"
#include "Transport.hpp"

using namespace std;

BDTransport::BDTransport() : BDCategorieAbstrait("Transport") {}

shared_ptr<OffreReservationAbstrait> BDTransport::createObjectFromRow(vector<string> row) {
    
    Moment momentDepart = { row[5], row[6] };
    Moment momentFin = { row[7], row[8] };
    Avion avion = { row[9], row[1], row[11] == "true" };
    LigneTransport ligneTransport = { row[0], row[2], row[3], row[4], momentDepart, momentFin, avion };
    return make_shared<Transport>(ligneTransport, row[10], stoi(row[12]), row[13]);
}
