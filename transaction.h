#pragma once

enum class TypeTransaction {
    Depot,
    Retrait,
    VirementEntrant,
    VirementSortant
};

class Transaction {
private:
    TypeTransaction type;
    double montant;
    int numeroCompte;

public:
    Transaction(TypeTransaction t, double m, int num);

    TypeTransaction getType() const;
    double getMontant() const;
    int getNumeroCompte() const;
};