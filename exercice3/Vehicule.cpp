#include "Vehicule.hpp"

Vehicule::Vehicule(const std::string& m, const std::string& mod)
    : marque(m), modele(mod) {}

void Vehicule::afficherVehicule() const {
    std::cout << "Marque : " << marque << "\n";
    std::cout << "Modele : " << modele << "\n";
}