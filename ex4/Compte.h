#ifndef COMPTE_H
#define COMPTE_H

#include <stdexcept>
#include <string>

class MontantInvalideException : public std::runtime_error {
public:
    MontantInvalideException(const std::string& msg) : std::runtime_error(msg) {}
};

class SoldeInsuffisantException : public std::runtime_error {
public:
    SoldeInsuffisantException(const std::string& msg) : std::runtime_error(msg) {}
};

class Compte {
private:
    int solde;
public:
    Compte(int initial = 0) : solde(initial) {}
    void deposer(int montant);
    void retirer(int montant);
    int getSolde() const { return solde; }
};

#endif
