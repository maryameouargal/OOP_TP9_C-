#ifndef THERMIQUE_HPP
#define THERMIQUE_HPP

#include "Vehicule.hpp"

class Thermique : public virtual Vehicule {
    // attribut consommation du véhicule thermique
protected:
    double consommation;   

public:
    Thermique(const std::string& m, const std::string& mod, double conso);

    void afficherThermique() const;
};

#endif