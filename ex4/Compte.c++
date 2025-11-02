#include "Compte.h"

void Compte::deposer(int montant) {
    if (montant < 0)
        throw MontantInvalideException("Montant du depot invalide : " + std::to_string(montant));
    solde += montant;
}

void Compte::retirer(int montant) {
    if (montant < 0)
        throw MontantInvalideException("Montant du retrait invalide : " + std::to_string(montant));
    if (montant > solde)
        throw SoldeInsuffisantException("Solde insuffisant pour retirer : " + std::to_string(montant));
    solde -= montant;
}
