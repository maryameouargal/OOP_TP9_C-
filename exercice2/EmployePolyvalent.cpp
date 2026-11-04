#include "EmployePolyvalent.hpp"

EmployePolyvalent::EmployePolyvalent(double salaireTech, double salaireCompta)
    : Technicien(salaireTech), Comptable(salaireCompta) {
    
}

void EmployePolyvalent::afficherTousSalaires() const {
    std::cout << "-Employe Polyvalent \n";
    Technicien::afficherSalaire();   // version Technicien
    Comptable::afficherSalaire();    // version Comptable
}