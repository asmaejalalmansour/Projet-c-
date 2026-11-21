
#include "Compte.h"

Compte::Compte(int numero, const std::string& titulaire, double depotInitial)
    : numero(numero), titulaire(titulaire), solde(depotInitial) {
}

int Compte::getNumero() const {
    return numero;
}

std::string Compte::getTitulaire() const {
    return titulaire;
}

double Compte::getSolde() const {
    return solde;
}

bool Compte::deposer(double montant) {
    if (montant <= 0) {
        return false;
    }

    solde += montant;
    return true;
}

bool Compte::retirer(double montant) {
    if (montant <= 0 || montant > solde) {
        return false;
    }

    solde -= montant;
    return true;
}