#include "produit.h"

Produit::Produit(const std::string& nom, int stock)
    : nom_(nom), stock_(stock) {}

void Produit::vendre(int quantite) {
    if (quantite > stock_) {
        throw StockInsuffisantException("Stock insuffisant pour le produit " + nom_);
    }
    stock_ -= quantite;
}

int Produit::getStock() const {
    return stock_;
}

std::string Produit::getNom() const {
    return nom_;
}
