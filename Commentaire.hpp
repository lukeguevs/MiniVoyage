#pragma once
#include <stdio.h>
#include <string>

using namespace std;

class Commentaire {
private:
    string texte;
public:
    Commentaire(string commentaire);
    void setTexte(string newTexte);
    string getTexte();
};
