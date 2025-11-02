#include "division.h"
#include <stdexcept>

int diviser(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Erreur : division par zéro !");
    }
    return a / b;
}

