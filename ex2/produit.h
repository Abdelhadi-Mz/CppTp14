#ifndef PRODUIT_H
#define PRODUIT_H

#include <stdexcept>
#include <string>

class StockInsuffisantException : public std::runtime_error {
public:
    StockInsuffisantException(const std::string& msg)
        : std::runtime_error(msg) {}
};

class Produit {
private:
    std::string nom_;
    int stock_;
public:
    Produit(const std::string& nom, int stock);
    void vendre(int quantite);
    int getStock() const;
    std::string getNom() const;
};

#endif
