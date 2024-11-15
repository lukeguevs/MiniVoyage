#pragma once
#include <iostream>
#include <string>

using namespace std;

class Hotel {
public:
    Hotel(string cote, string nom, string secteur, string ville);
    
    string cote;
    string nom;
    string secteur;
    string ville;
};
