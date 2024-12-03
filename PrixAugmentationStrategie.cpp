#include "PrixAugmentationStrategie.hpp"

PrixAugmentationStrategie::PrixAugmentationStrategie(OffreReservationAbstrait* contexte , double augmentation) : PrixStrategieAbstrait(contexte), augmentation(augmentation) {}

int PrixAugmentationStrategie::obtenirPrix() const{
    return contexte->prix * (1 + augmentation);
}



PrixAugmentationStrategie::PrixAugmentationStrategie(OffreReservationAbstrait* contexte) : PrixStrategieAbstrait(contexte) {
}


PrixAugmentationStrategie::PrixAugmentationStrategie(double augmentation) :  augmentation (augmentation) {
}
