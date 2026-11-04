#include "Electrique.hpp"

Electrique::Electrique(const std::string& m, const std::string& mod, double auto_)
    : Vehicule(m, mod), autonomie(auto_) {}

void Electrique::afficherElectrique() const {
    std::cout << "Autonomie : " << autonomie << " km\n";
}