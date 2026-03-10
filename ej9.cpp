#include <iostream>

// Función que devuelve el mayor de tres números
int gran_de_tres(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    int x, y, z;

    // Ejemplo 1: Pedir al usuario tres números
    std::cout << "Introduce el primer número: ";
    std::cin >> x;
    std::cout << "Introduce el segundo número: ";
    std::cin >> y;
    std::cout << "Introduce el tercer número: ";
    std::cin >> z;

    std::cout << "El mayor es: " << gran_de_tres(x, y, z) << std::endl;

    // Ejemplo 2: Probar con números fijos
    int a = 10, b = 25, c = 15;
    std::cout << "Entre " << a << ", " << b << " y " << c << ", el mayor es: "
              << gran_de_tres(a, b, c) << std::endl;

    int d = -5, e = -20, f = 0;
    std::cout << "Entre " << d << ", " << e << " y " << f << ", el mayor es: "
              << gran_de_tres(d, e, f) << std::endl;

    return 0;
}