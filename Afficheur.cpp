#include "Afficheur.hpp"

Afficheur* Afficheur::obtenirInstance() {
        static Afficheur instance;
        return &instance;
    }


void Afficheur::afficherString(string message) {
    cout << message << endl;
    messages.push_back(message);
}

void Afficheur::exporter() {
        if (filename.empty()) {
            cerr << "Error: Filename not set!" << endl;
            return;
        }

        ofstream outputFile(filename, ios::app); // Open file in append mode
        if (!outputFile) {
            cerr << "Error: Could not open the file " << filename << endl;
            return;
        }

        for (const auto& msg : messages) {
            outputFile << msg << endl; // Write each message to the file
        }

        outputFile.close(); // Close the file
        messages.clear();   // Clear the vector after exporting
    }

string Afficheur::getFilename() {
        return filename;
    }



void Afficheur::setFilename(string newFilename) {
    filename = newFilename;
}

void Afficheur::afficherReservations(shared_ptr<Voyage> voyage) {

    cout << voyage->nom << ": " << endl;
    messages.push_back(voyage->nom + ":\n");
    string lastDayName;

    for (auto segment : voyage->reservations->reservations) {
        auto segmentPtr = dynamic_pointer_cast<ReservationComposite>(segment);
        if (!segmentPtr) continue;

        for (auto journee : segmentPtr->reservations) {
            auto journeePtr = dynamic_pointer_cast<ReservationComposite>(journee);
            if (!journeePtr) continue;

            if (journeePtr->nom != lastDayName) {
                cout << "  Journee : " << journeePtr->nom << ": " << endl;
            messages.push_back("  Journee : " + journeePtr->nom + ":\n");
            }
                lastDayName = journeePtr->nom;

            for (auto reservation : journeePtr->reservations) {
                auto message = reservation->afficher();
                messages.push_back(message);
                if (auto reservationPtr = dynamic_pointer_cast<ReservationElementaire>(reservation)){
                    if( auto offre = dynamic_pointer_cast<OffreDeReservationDecorateur>(reservationPtr->offre)) {
                        for (auto comment : offre->commentaires){
                            cout << "    Commentaire: "  << comment->getTexte() << endl << endl;
                            messages.push_back("    Commentaire: " + comment->getTexte());
                        }
                    }
                }
            }
        }
    }
}

