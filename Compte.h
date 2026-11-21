#pragma once

#include <string>

class Compte {
private:
    int numero;
    std::string titulaire;
    double solde;

public:
    Compte(int numero, const std::string& titulaire, double depotInitial = 0.0);

    int getNumero() const;
    std::string getTitulaire() const;
    double getSolde() const;

    bool deposer(double montant);
    bool retirer(double montant);
};