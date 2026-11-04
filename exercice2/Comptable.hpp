#ifndef COMPTABLE_HPP
#define COMPTABLE_HPP

#include <iostream>

class Comptable {
     // attribut salaire du comptable

protected:
    double salaire;  
public:
    // Constructeur
    Comptable(double s);

    // Affiche le salaire
    void afficherSalaire() const;
};

#endif