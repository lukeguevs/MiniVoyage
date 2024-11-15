#pragma once
#include <iostream>
#include <string>

using namespace std;

class Avion {
public:
    Avion(string marque, string transporteur, bool wifi);
    
    string marque;
    string transporteur;
    bool wifi;
};
