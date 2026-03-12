#include <iostream>

double DivisioSegura(double dividend, double divisor) {
    if (divisor == 0) {
        std::cout << "Error: No es pot dividir per zero!" << std::endl;
        return 0; 
    }
    return dividend / divisor;
}

int main() {
    double a, b;
    std::cout << "Introdueix el dividend: ";
    std::cin >> a;
    std::cout << "Introdueix el divisor: ";
    std::cin >> b;

    double resultat = DivisioSegura(a, b);

    if (b != 0) { 
        std::cout << "El resultat de " << a << " / " << b << " és: " << resultat << std::endl;
    }

    return 0;
}