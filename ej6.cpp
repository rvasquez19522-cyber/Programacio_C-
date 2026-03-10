#include <iostream>

int main() {
    double num1, num2;
    char operacion;

    std::cout << "Bienvenido a la calculadora\n";
    std::cout << "Introduce el primer número: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    std::cout << "Elige la operación (+, -, *, /): ";
    std::cin >> operacion;

    switch (operacion) {
        case '+':
            std::cout << "Resultado: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0)
                std::cout << "Resultado: " << num1 / num2 << std::endl;
            else
                std::cout << "Error: No se puede dividir entre cero" << std::endl;
            break;
        default:
            std::cout << "Operación inválida" << std::endl;
    }

    return 0;
}