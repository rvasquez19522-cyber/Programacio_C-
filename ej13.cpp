#include <iostream>
#include <string>
#include <algorithm> // Para std::reverse

// Función que invierte cualquier cadena, incluyendo espacios
std::string invertir(const std::string& cadena) {
    std::string invertida = cadena;
    std::reverse(invertida.begin(), invertida.end());
    return invertida;
}

int main() {
    std::string texto;

    std::cout << "Introdueixi la paraula a girar: ";
    std::getline(std::cin, texto); // Leer toda la línea, incluyendo espacios

    std::string resultado = invertir(texto);

    std::cout << "La cadena \"" << texto << "\" a l'inrevés és: " << resultado << std::endl;

    return 0;
}