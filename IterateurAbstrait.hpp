#pragma once
#include <vector>
#include <iostream>
#include <string>
using namespace std;

template <class T>
class IterateurAbstrait
{
public:
    IterateurAbstrait() = default;
    virtual bool estPremier() = 0;
    virtual bool estFin() = 0;
    virtual void suivant() = 0;
    virtual void precedent() = 0;
    virtual T obtenirSelection() = 0;
    virtual T obtenirPremier() = 0;
};