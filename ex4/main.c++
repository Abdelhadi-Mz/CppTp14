#include <iostream>
#include "Compte.h"

int main() {
    Compte c(1000);

    try {
        c.deposer(500);
        std::cout << "Solde apres depot : " << c.getSolde() << "\n";

        c.retirer(200);
        std::cout << "Solde aprws retrait : " << c.getSolde() << "\n";

        c.retirer(2000);
    }
    catch (const MontantInvalideException& e) {
        std::cout << "Erreur montant : " << e.what() << "\n";
    }
    catch (const SoldeInsuffisantException& e) {
        std::cout << "Erreur solde : " << e.what() << "\n";
    }
    catch (const std::exception& e) {
        std::cout << "Autre erreur : " << e.what() << "\n";
    }

    return 0;
}
