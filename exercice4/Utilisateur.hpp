#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <string>
#include <iostream>

class Utilisateur {
protected:
    int identifiant;
    std::string login;

public:
    // Constructeur
    Utilisateur(int id, const std::string& log);

    // Affiche les infos communes
    void afficherUtilisateur() const;
};

#endif