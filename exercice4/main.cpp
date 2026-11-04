#include <iostream>
#include <string>
#include <limits>
#include "SuperUtilisateur.hpp"

// Petite fonction pour vider le buffer apres une saisie
void viderBuffer() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    int choix = -1;

    while (choix != 0) {
        std::cout << "\nMENU \n";
        std::cout << "1. Creer et tester un SuperUtilisateur\n";
        std::cout << "0. Quitter\n";
        std::cout << "Votre choix : ";
        std::cin >> choix;

        if (std::cin.fail()) {
            std::cin.clear();
            viderBuffer();
            std::cout << "Saisie invalide !\n";
            continue;
        }

        if (choix == 1) {
            int id, droits, niveau;
            std::string login;

            std::cout << "Identifiant : ";
            std::cin >> id;
            viderBuffer();

            std::cout << "Login : ";
            std::getline(std::cin, login);

            std::cout << "Droits d'acces (1-5) : ";
            std::cin >> droits;

            std::cout << "Niveau de moderation (1-3) : ";
            std::cin >> niveau;

            SuperUtilisateur su(id, login, droits, niveau);
            std::cout << "\n";
            su.afficherProfilComplet();
        }
        else if (choix == 0) {
            std::cout << "Au revoir !\n";
        }
        else {
            std::cout << "Choix inconnu, reessayez.\n";
        }
    }

    return 0;
}