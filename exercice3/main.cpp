#include <iostream>
#include "Hybride.hpp"

int main() {
    // Création d'une voiture hybride
    Hybride h("Toyota", "Prius", 4.5, 650.0);

    // Affichage de toutes les caractéristiques
    h.afficherCaracteristiques();

    return 0;
}