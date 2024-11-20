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
    virtual ~IterateurAbstrait() = default;
    virtual bool estFin() = 0;
    virtual void suivant() = 0;
    virtual T obtenirSelection() = 0;
    virtual T obtenirPremier() = 0;
};
