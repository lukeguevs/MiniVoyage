#pragma once
#include <iostream>
#include <string>

using namespace std;

class Activite {
public:
    Activite(int etoile, string nom, string ville);
    
    int etoile;
    string nom;
    string ville;
};
