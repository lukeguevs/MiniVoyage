#include "PrixAugmentationStrategie.hpp"


double PrixAugmentationStrategie::obtenirChangement() const{
    return (1.0 + augmentation);
}


PrixAugmentationStrategie::PrixAugmentationStrategie(double augmentation) :  augmentation (augmentation) {
}
