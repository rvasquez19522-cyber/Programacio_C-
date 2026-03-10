#include <iostream>
#include <vector>

bool superposicio(const std::vector<int>& lista1, const std::vector<int>& lista2) {
    for (int x : lista1) {
        for (int y : lista2) {
            if (x == y) return true; 
        }
    }
    return false; 
}

int main() {
    int n1, n2;

    std::cout << "¿Cuántos elementos tendrá la primera lista? ";
    std::cin >> n1;
    std::vector<int> lista1(n1);
    std::cout << "Introduce los " << n1 << " elementos de la primera lista:\n";
    for (int i = 0; i < n1; ++i) {
        std::cin >> lista1[i];
    }

    std::cout << "¿Cuántos elementos tendrá la segunda lista? ";
    std::cin >> n2;
    std::vector<int> lista2(n2);
    std::cout << "Introduce los " << n2 << " elementos de la segunda lista:\n";
    for (int i = 0; i < n2; ++i) {
        std::cin >> lista2[i];
    }

    if (superposicio(lista1, lista2)) {
        std::cout << "Las listas tienen al menos un elemento en común." << std::endl;
    } else {
        std::cout << "Las listas no tienen elementos en común." << std::endl;
    }

    std::vector<int> ejemplo1 = {1,2,3};
    std::vector<int> ejemplo2 = {3,4,5};
    std::cout << "\nEjemplo fijo: [1,2,3] y [3,4,5] → "
              << (superposicio(ejemplo1, ejemplo2) ? "Sí" : "No") << std::endl;

    std::vector<int> ejemplo3 = {1,2,3};
    std::vector<int> ejemplo4 = {4,5,6};
    std::cout << "Ejemplo fijo: [1,2,3] y [4,5,6] → "
              << (superposicio(ejemplo3, ejemplo4) ? "Sí" : "No") << std::endl;

    return 0;
}