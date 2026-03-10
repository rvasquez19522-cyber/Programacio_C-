#include <iostream>
#include <cctype> 

bool es_vocal(char c) {
    c = std::tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char letra;

    std::cout << "Introduce un carácter: ";
    std::cin >> letra;

    if (es_vocal(letra)) {
        std::cout << letra << " es una vocal." << std::endl;
    } else {
        std::cout << letra << " no es una vocal." << std::endl;
    }

    char ejemplos[] = {'a', 'b', 'E', 'x', 'i', 'O', 'u', 'z'};
    std::cout << "\nPruebas con ejemplos fijos:\n";
    for (char c : ejemplos) {
        std::cout << c << ": " << (es_vocal(c) ? "Vocal" : "No vocal") << std::endl;
    }

    return 0;
}