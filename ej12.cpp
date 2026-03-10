#include <iostream>
#include <vector>

int sumar_lista(const std::vector<int>& lista) {
    int suma = 0;
    for (int num : lista) {
        suma += num;
    }
    return suma;
}

int multiplicar_lista(const std::vector<int>& lista) {
    int producto = 1;
    for (int num : lista) {
        producto *= num;
    }
    return producto;
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

    std::cout << "La suma de los elementos es: " << sumar_lista(lista) << std::endl;
    std::cout << "El producto de los elementos es: " << multiplicar_lista(lista) << std::endl;

    std::vector<int> ejemplo1 = {1,2,3,4};
    std::cout << "\nEjemplo fijo: [1,2,3,4]\n";
    std::cout << "Suma: " << sumar_lista(ejemplo1) << "\n";
    std::cout << "Multiplicación: " << multiplicar_lista(ejemplo1) << "\n";

    std::vector<int> ejemplo2 = {5,3,2};
    std::cout << "\nEjemplo fijo: [5,3,2]\n";
    std::cout << "Suma: " << sumar_lista(ejemplo2) << "\n";
    std::cout << "Multiplicación: " << multiplicar_lista(ejemplo2) << "\n";

    return 0;
}