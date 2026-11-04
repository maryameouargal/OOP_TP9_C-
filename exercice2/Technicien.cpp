#include "Technicien.hpp"

Technicien::Technicien(double s) : salaire(s) {}

void Technicien::afficherSalaire() const {
    std::cout << "Salaire Technicien : " << salaire << " DH\n";
}