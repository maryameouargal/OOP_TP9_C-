#ifndef EMPLOYEPOLYVALENT_HPP
#define EMPLOYEPOLYVALENT_HPP

#include "Technicien.hpp"
#include "Comptable.hpp"

class EmployePolyvalent : public Technicien, public Comptable {
public:
    // Constructeur 
    EmployePolyvalent(double salaireTech, double salaireCompta);

    // Affiche les deux salaires 
    void afficherTousSalaires() const;
};

#endif