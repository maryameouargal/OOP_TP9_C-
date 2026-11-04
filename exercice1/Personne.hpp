#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
#include <iostream>

class Personne {
    // les attributs de class mére 
protected:
    std::string nom;
    std::string prenom;

    // constructure 
public:
    Personne(const std::string& n, const std::string& p);
    void afficher() const;
};

#endif