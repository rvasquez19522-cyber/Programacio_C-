#include <iostream>
#include <string>
#include <algorithm>

// Función que comprueba si una palabra es palíndromo
bool es_palindrom(const std::string& palabra) {
    std::string original = palabra;
    std::string invertida = palabra;

    // Convertir a minúsculas
    std::transform(original.begin(), original.end(), original.begin(), ::tolower);
    std::transform(invertida.begin(), invertida.end(), invertida.begin(), ::tolower);

    // Invertir la cadena
    std::reverse(invertida.begin(), invertida.end());

    return original == invertida;
}

int main() {
    std::string palabra;

    std::cout << "Introduce una palabra: ";
    std::getline(std::cin, palabra);

    if (es_palindrom(palabra)) {
        std::cout << "\"" << palabra << "\" es un palíndromo." << std::endl;
    } else {
        std::cout << "\"" << palabra << "\" no es un palíndromo." << std::endl;
    }

    return 0;
}