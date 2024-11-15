#include "BDP.hpp"

BDP::BDP() {
    cout << "Objet BDDP créé!\n";
}


shared_ptr<ReservationElementaire> BDP::createObjectFromRow(vector<string> row) {
    return make_shared<ReservationElementaire>();
}
