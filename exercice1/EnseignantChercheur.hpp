#ifndef ENSEIGNANTCHERCHEUR_HPP
#define ENSEIGNANTCHERCHEUR_HPP

#include "Personne.hpp"
#include "Chercheur.hpp"

class EnseignantChercheur : public Personne, public Chercheur {
public:
    EnseignantChercheur(const std::string& n,
                        const std::string& p,
                        const std::string& domaine);

    // Redéfinit afficher() 
    void afficher() const;
};

#endif