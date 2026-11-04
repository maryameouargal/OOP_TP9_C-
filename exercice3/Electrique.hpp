#ifndef ELECTRIQUE_HPP
#define ELECTRIQUE_HPP

#include "Vehicule.hpp"

class Electrique : public virtual Vehicule {
protected:
    double autonomie;   

public:
    Electrique(const std::string& m, const std::string& mod, double auto_);

    void afficherElectrique() const;
};

#endif