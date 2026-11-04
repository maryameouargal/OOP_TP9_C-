#include "Personne.hpp"

Personne::Personne(const std::string& n, const std::string& p)
    : nom(n), prenom(p) {}

void Personne::afficher() const {
    std::cout << "Name   : " << nom << "\n";
    std::cout << "Prenom : " << prenom << "\n";
}