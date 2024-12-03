#pragma once
#include "PrixStrategieAbstrait.hpp"
#include <memory>
#include <string>
using namespace std;

class BDOR;

class IterateurBDOR {
    public:
        IterateurBDOR(BDOR* bdor);
        void changerPrix(shared_ptr<PrixStrategieAbstrait> strategie, string categorie);
        int compterOffres();
    private:
        BDOR* bdor;
};