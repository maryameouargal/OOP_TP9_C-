#include "Comptable.hpp"

Comptable::Comptable(double s) : salaire(s) {}

void Comptable::afficherSalaire() const {
    std::cout << "Salaire Comptable : " << salaire << " DH\n";
}