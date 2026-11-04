#include <iostream>
#include "EmployePolyvalent.hpp"

int main() {
    // Création d'un employé polyvalent avec deux salaires
    EmployePolyvalent emp(5000.0, 6500.0);

    // la méthode qui gère les deux affichages
    emp.afficherTousSalaires();

    return 0;
}