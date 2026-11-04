#ifndef HYBRIDE_HPP
#define HYBRIDE_HPP

#include "Thermique.hpp"
#include "Electrique.hpp"

class Hybride : public Thermique, public Electrique {
public:
    // Constructeur 
    Hybride(const std::string& m,
            const std::string& mod,
            double conso,
            double auto_);

    // Affiche toutes les caractéristiques
    void afficherCaracteristiques() const;
};

#endif