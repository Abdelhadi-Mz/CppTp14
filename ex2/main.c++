#include <iostream>
#include "produit.h"

int main() {
    Produit p("Stylo", 5);

    try {
        std::cout << "Vente de 3 stylos\n";
        p.vendre(3);
        std::cout << "Stock restant : " << p.getStock() << "\n";

        std::cout << "Vente de 4 stylos\n";
        p.vendre(4);
    }
    catch (const StockInsuffisantException& e) {
        std::cout << e.what() << "\n";
    }

    return 0;
}
