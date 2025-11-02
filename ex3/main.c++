#include <iostream>
#include "fichier.h"

int main() {
    std::string nomFichier = "exemple.txt";

    try {
        auto lignes = lireFichier(nomFichier);
        for (const auto& ligne : lignes) {
            std::cout << ligne << "\n";
        }
    }
    catch (const std::exception& e) {
        std::cout << "Erreur: " << e.what() << "\n";
    }

    return 0;
}
