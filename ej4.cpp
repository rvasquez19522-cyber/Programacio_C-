#include <iostream>
#include <string>  

int main() {
    std::string nombre;
    std::string apellido;

    std::cout << "Escribe tu nombre: ";
    std::cin >> nombre;

    std::cout << "Escribe tu apellido: ";
    std::cin >> apellido;

    std::cout << "Hola, " << nombre << " " << apellido << "!" << std::endl;

    return 0;
}