

#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Vendeur {
public:
    Vendeur() = default;
    Vendeur(string courriel, string nom);
    string courriel;
    string nom;
};
