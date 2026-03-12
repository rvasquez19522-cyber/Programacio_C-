#include <iostream>
#include <vector>
#include <cmath> 

int main() {
    std::vector<int> llista;
    int potencia;

    std::cout << "Introdueix la potència a aplicar als nombres: ";
    std::cin >> potencia;

    for (int i = 0; i < 10; ++i) {
        llista.push_back(static_cast<int>(pow(i, potencia)));
    }

    std::cout << "Llista dels 10 primers números elevats a la potència " << potencia << ": [";
    for (size_t i = 0; i < llista.size(); ++i) {
        std::cout << llista[i];
        if (i != llista.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}