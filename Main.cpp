 #include <iostream>
#include "Compte.h"

int main() {
    Compte c1(1, "Asmae", 500.0);
    Compte c2(2, "Arij");

    std::cout << std::boolalpha;

    std::cout << "Solde c1: " << c1.getSolde() << std::endl;
    std::cout << "Solde c2: " << c2.getSolde() << std::endl;

    std::cout << "Depot 100: " << c1.deposer(100) << std::endl;
    std::cout << "Solde: " << c1.getSolde() << std::endl;

    std::cout << "Depot 0: " << c1.deposer(0) << std::endl;
    std::cout << "Solde: " << c1.getSolde() << std::endl;

    std::cout << "Depot -50: " << c1.deposer(-50) << std::endl;
    std::cout << "Solde: " << c1.getSolde() << std::endl;

    std::cout << "Retrait 200: " << c1.retirer(200) << std::endl;
    std::cout << "Solde: " << c1.getSolde() << std::endl;

    std::cout << "Retrait 1000: " << c1.retirer(1000) << std::endl;
    std::cout << "Solde: " << c1.getSolde() << std::endl;

    std::cout << "Retrait -20: " << c1.retirer(-20) << std::endl;
    std::cout << "Solde: " << c1.getSolde() << std::endl;

    return 0;
}