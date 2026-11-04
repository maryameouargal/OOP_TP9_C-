#ifndef ADMINISTRATEUR_HPP
#define ADMINISTRATEUR_HPP

#include "Utilisateur.hpp"

class Administrateur : public virtual Utilisateur {
protected:
    int droitsAcces;   

public:
    Administrateur(int id, const std::string& log, int droits);

    void gererSysteme() const;
};

#endif