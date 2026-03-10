#include <iostream>
#include <vector>

// Función que devuelve el número más grande de la lista
int gran_llista(const std::vector<int>& lista) {
    if (lista.empty()) return 0; // Si la lista está vacía, devolvemos 0
    int max = lista[0];
    for (int num : lista) {
        if (num > max) max = num;
    }
    return max;
}

int main() {
    int n;
    std::cout << "¿Cuántos números tendrá la lista? ";
    std::cin >> n;

    std::vector<int> lista(n);
    std::cout << "Introduce los " << n << " números:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> lista[i];
    }

    std::cout << "El número más grande de la lista es: " << gran_llista(lista) << std::endl;

    return 0;
}