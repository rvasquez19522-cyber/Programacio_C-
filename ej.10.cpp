#include <iostream>
#include <string>
#include <vector>

int longitudCadena(const std::string& cadena) {
    return cadena.length();
}

int longitudLista(const std::vector<int>& lista) {
    return lista.size();
}

int main() {
    int opcion;
    std::cout << "¿Qué deseas medir?\n";
    std::cout << "1. Longitud de una cadena\n";
    std::cout << "2. Longitud de una lista de números\n";
    std::cout << "Elige una opción (1 o 2): ";
    std::cin >> opcion;
    std::cin.ignore(); 

    if (opcion == 1) {
        std::string cadena;
        std::cout << "Introduce la cadena: ";
        std::getline(std::cin, cadena);
        std::cout << "La longitud de la cadena es: " << longitudCadena(cadena) << std::endl;
    }
    else if (opcion == 2) {
        int n;
        std::cout << "¿Cuántos números tendrá la lista? ";
        std::cin >> n;
        std::vector<int> lista(n);
        std::cout << "Introduce los " << n << " números:\n";
        for (int i = 0; i < n; ++i) {
            std::cin >> lista[i];
        }
        std::cout << "La longitud de la lista es: " << longitudLista(lista) << std::endl;
    }
    else {
        std::cout << "Opción inválida." << std::endl;
    }

    return 0;
}