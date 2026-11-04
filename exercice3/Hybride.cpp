#include "Hybride.hpp"

Hybride::Hybride(const std::string& m,
                 const std::string& mod,
                 double conso,
                 double auto_)
    : Vehicule(m, mod),        
      Thermique(m, mod, conso),
      Electrique(m, mod, auto_) {}

void Hybride::afficherCaracteristiques() const {
    std::cout << "Vehicule Hybride \n";
    afficherVehicule();     
    afficherThermique();
    afficherElectrique();
}