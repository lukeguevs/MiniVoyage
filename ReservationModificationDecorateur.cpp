#include "ReservationModificationDecorateur.hpp"


void ReservationModificationDecorateur::ajouterModification(shared_ptr<ReservationAbstrait> modification) {
    modifications.push_back(modification);
}
void ReservationModificationDecorateur::retirerModification(shared_ptr<ReservationAbstrait> modification) {
    for (auto i = modifications.size() - 1; i >= 0; i--) {
        if (modifications[i].get() == modification.get()) modifications.erase(modifications.begin() + i);
    }
}
