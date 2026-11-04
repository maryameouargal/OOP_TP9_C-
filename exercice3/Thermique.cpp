#include "Thermique.hpp"

Thermique::Thermique(const std::string& m, const std::string& mod, double conso)
    : Vehicule(m, mod), consommation(conso) {}

void Thermique::afficherThermique() const {
    std::cout << "Consommation : " << consommation << " L/100km (this is just an example im not sure )\n";
}