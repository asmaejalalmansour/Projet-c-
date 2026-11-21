#pragma once

#include <vector>
#include "Compte.h"

class Banque {
private:
    std::vector<Compte> comptes;

public:
    void ajouterCompte(const Compte& compte);
    void afficherComptes() const;
};