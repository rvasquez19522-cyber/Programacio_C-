#include <iostream>
#include <vector>

// Función que imprime tantos puntos como el valor de cada número de la lista
void crear_punts(const std::vector<int>& lista) {
    for (int num : lista) {
        for (int i = 0; i < num; ++i) {
            std::cout << ".";
        }
        std::cout << std::endl; // Salto de línea entre números
    }
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

    crear_punts(lista);

    return 0;
}