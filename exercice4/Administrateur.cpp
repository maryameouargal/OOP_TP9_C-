#include "Administrateur.hpp"

Administrateur::Administrateur(int id, const std::string& log, int droits)
    : Utilisateur(id, log), droitsAcces(droits) {}

void Administrateur::gererSysteme() const {
    std::cout << "Admin/ Gestion du systeme (droits = "
              << droitsAcces << ")\n";
}