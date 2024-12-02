#include "Commentaire.hpp"

Commentaire::Commentaire(string commentaire) : texte(commentaire) {}
string Commentaire::getTexte() {
    return texte; 
}
void Commentaire::setTexte(string newTexte) {
    texte = newTexte; 
}