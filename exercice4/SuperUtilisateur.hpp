#ifndef SUPERUTILISATEUR_HPP
#define SUPERUTILISATEUR_HPP

#include "Administrateur.hpp"
#include "Moderateur.hpp"

class SuperUtilisateur : public Administrateur, public Moderateur {
public:
    // Constructeur : on initialise Utilisateur UNE SEULE FOIS
    SuperUtilisateur(int id,
                     const std::string& log,
                     int droits,
                     int niveau);

    // Affiche tout ce que le super-utilisateur peut faire
    void afficherProfilComplet() const;
};

#endif