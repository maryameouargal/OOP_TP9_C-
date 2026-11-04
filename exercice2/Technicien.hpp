#ifndef TECHNICIEN_HPP
#define TECHNICIEN_HPP

#include <iostream>

class Technicien {
    // attribut salaire du technicien
protected:
    double salaire;   

public:
    // Constructeur
    Technicien(double s);

    // Affiche le salaire
    void afficherSalaire() const;
};

#endif