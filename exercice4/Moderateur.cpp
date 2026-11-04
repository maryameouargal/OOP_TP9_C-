#include "Moderateur.hpp"

Moderateur::Moderateur(int id, const std::string& log, int niveau)
    : Utilisateur(id, log), niveauModeration(niveau) {}

void Moderateur::modererContenu() const {
    std::cout << "Moderateur/ Verification du contenu [[niveau = "
              << niveauModeration << "]]\n";
}