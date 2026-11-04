#ifndef VEHICULE_HPP
#define VEHICULE_HPP

#include <string>
#include <iostream>

class Vehicule {
protected:
    std::string marque;
    std::string modele;

public:
    // Constructeur
    Vehicule(const std::string& m, const std::string& mod);

    // Affichage des infos 
    void afficherVehicule() const;
};

#endif