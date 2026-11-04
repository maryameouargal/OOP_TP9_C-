#ifndef CHERCHEUR_HPP
#define CHERCHEUR_HPP

#include <string>
#include <iostream>

class Chercheur {
protected:
    std::string domaineRecherche;

public:
    Chercheur(const std::string& domaine);
    void afficher() const;
};

#endif