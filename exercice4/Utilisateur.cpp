#include "Utilisateur.hpp"

Utilisateur::Utilisateur(int id, const std::string& log)
    : identifiant(id), login(log) {}

void Utilisateur::afficherUtilisateur() const {
    std::cout << "ID    : " << identifiant << "\n";
    std::cout << "Login : " << login << "\n";
}