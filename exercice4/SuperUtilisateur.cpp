#include "SuperUtilisateur.hpp"

SuperUtilisateur::SuperUtilisateur(int id,
                                   const std::string& log,
                                   int droits,
                                   int niveau)
    : Utilisateur(id, log),          
      Administrateur(id, log, droits),
      Moderateur(id, log, niveau) {}

void SuperUtilisateur::afficherProfilComplet() const {
    std::cout << "Super Utilisateur \n";
    afficherUtilisateur();  
    gererSysteme();
    modererContenu();
    
}