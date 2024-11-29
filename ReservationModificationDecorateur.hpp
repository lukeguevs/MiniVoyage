#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "ReservationDecorateurAbstrait.hpp"

using namespace std;


class ReservationModificationDecorateur : public ReservationDecorateurAbstrait {
private:
    vector<shared_ptr<ReservationAbstrait>> modifications;
public:
    void ajouterModification(shared_ptr<ReservationAbstrait> modification);
    void retirerModification(shared_ptr<ReservationAbstrait> modification);
    
};
