#include <iostream>
#include <string>

// Función que recibe la edad y devuelve un mensaje según la edad
std::string verificarEdad(int edad) {
    if (edad > 18) {
        return "Eres mayor de edad.";
    } else if (edad == 18) {
        return "Tienes exactamente 18 años.";
    } else {
        return "No eres mayor de edad.";
    }
}

int main() {
    int edad;

    // Pedir la edad al usuario
    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    // Llamar a la función y mostrar el resultado
    std::cout << verificarEdad(edad) << std::endl;

    return 0;
}