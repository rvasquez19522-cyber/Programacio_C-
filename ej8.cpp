#include <iostream>

int gran(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    std::cout << "Introduce el primer número: ";
    std::cin >> x;
    std::cout << "Introduce el segundo número: ";
    std::cin >> y;

    std::cout << "El mayor es: " << gran(x, y) << std::endl;

    int a = 10, b = 25;
    std::cout << "Entre " << a << " y " << b << ", el mayor es: " << gran(a, b) << std::endl;

    int c = -5, d = -20;
    std::cout << "Entre " << c << " y " << d << ", el mayor es: " << gran(c, d) << std::endl;

    return 0;
}