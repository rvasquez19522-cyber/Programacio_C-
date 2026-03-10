#include <iostream>
#include <bitset>
#include <iomanip>
#include <sstream>

// Función para convertir un número decimal a otra base
std::string convertirBase(int numero, int base) {
    std::stringstream ss;
    switch (base) {
        case 2: // Binario
            ss << std::bitset<32>(numero);
            break;
        case 8: // Octal
            ss << std::oct << numero;
            break;
        case 10: // Decimal
            ss << numero;
            break;
        case 16: // Hexadecimal
            ss << std::hex << numero;
            break;
        default:
            ss << "Base no soportada";
    }
    return ss.str();
}

int main() {
    double num1, num2;  
    char operacion;
    int opcionBase;
    int numEntero;

    std::cout << "=== Calculadora con operaciones y conversion de bases ===\n";
    std::cout << "Introduce el primer número: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    std::cout << "Elige la operación (+, -, *, /): ";
    std::cin >> operacion;

    double resultado;
    bool operacionValida = true;

    switch (operacion) {
        case '+': resultado = num1 + num2; break;
        case '-': resultado = num1 - num2; break;
        case '*': resultado = num1 * num2; break;
        case '/': 
            if (num2 != 0) resultado = num1 / num2; 
            else { 
                std::cout << "Error: No se puede dividir entre cero\n"; 
                operacionValida = false; 
            }
            break;
        default:
            std::cout << "Operación inválida\n";
            operacionValida = false;
    }

    if (operacionValida) {
        std::cout << "Resultado: " << resultado << std::endl;

        // Solo convertimos la parte entera del resultado
        numEntero = static_cast<int>(resultado);

        std::cout << "Deseas convertir el resultado a otra base? (1-Sí, 0-No): ";
        int respuesta;
        std::cin >> respuesta;

        if (respuesta == 1) {
            std::cout << "Elige la base de destino:\n";
            std::cout << "1. Binario\n2. Octal\n3. Decimal\n4. Hexadecimal\n";
            std::cin >> opcionBase;

            int base;
            switch(opcionBase) {
                case 1: base = 2; break;
                case 2: base = 8; break;
                case 3: base = 10; break;
                case 4: base = 16; break;
                default: base = 10;
            }

            std::cout << "Resultado en la base seleccionada: " 
                      << convertirBase(numEntero, base) << std::endl;
        }
    }

    return 0;
}