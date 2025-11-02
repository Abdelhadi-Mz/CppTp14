#include "fichier.h"
#include <fstream>
#include <iostream>

std::vector<std::string> lireFichier(const std::string& nomFichier) {
    std::ifstream fichier(nomFichier);
    if (!fichier.is_open()) {
        throw std::runtime_error("Impossible d'ouvrir le fichier: " + nomFichier);
    }

    std::vector<std::string> lignes;
    std::string ligne;
    while (std::getline(fichier, ligne)) {
        lignes.push_back(ligne);
    }

    fichier.close();
    return lignes;
}
