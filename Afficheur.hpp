#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Voyage.hpp"
#include "ReservationModificationDecorateur.hpp"
#include "ReservationCommentaireDecorateur.hpp"
#include "Commentaire.hpp"
#include "OffreDeReservationDecorateur.hpp"
using namespace std;


class Afficheur {

    public:
        void afficherString(string message);
        void exporter();
        static Afficheur *obtenirInstance();
        string getFilename();
        void setFilename(string filename);
        vector<string> messages;
        void afficherReservations(shared_ptr<Voyage> voyage);

    private:
        Afficheur() = default;
        string filename;
        static Afficheur *instance;
};