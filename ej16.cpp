#include <iostream>
#include <string>

std::string crear_repetits(int n, char c) {
    return std::string(n, c); 
}

int main() {
    int n;
    char c;

    std::cout << "Introduce un número entero: ";
    std::cin >> n;

    std::cout << "Introduce un carácter: ";
    std::cin >> c;

    std::cout << crear_repetits(n, c) << std::endl;

    return 0;
}