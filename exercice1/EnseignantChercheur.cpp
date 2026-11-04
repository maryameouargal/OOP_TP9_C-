#include "EnseignantChercheur.hpp"

EnseignantChercheur::EnseignantChercheur(const std::string& n,
                                         const std::string& p,
                                         const std::string& domaine)
    : Personne(n, p), Chercheur(domaine) {
    
}

void EnseignantChercheur::afficher() const {
    std::cout << " Enseignant Chercheur \n";
    Personne::afficher();   
    Chercheur::afficher();  
}