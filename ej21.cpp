#include <iostream>
#include <vector>
#include <string>

// Función que filtra palabras con más de x caracteres
std::vector<std::string> filtrar_paraules(const std::vector<std::string>& llista, int x) {
    std::vector<std::string> resultat;
    for (const std::string& paraula : llista) {
        if (paraula.length() > x) {
            resultat.push_back(paraula);
        }
    }
    return resultat;
}

int main() {
    int n, x;
    std::cout << "¿Cuántas palabras tendrá la lista? ";
    std::cin >> n;
    std::cin.ignore(); // Limpiar buffer

    std::vector<std::string> llista(n);
    std::cout << "Introduce las palabras:\n";
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, llista[i]);
    }

    std::cout << "Introduce el número x: ";
    std::cin >> x;

    std::vector<std::string> filtrades = filtrar_paraules(llista, x);

    std::cout << "Palabras con más de " << x << " caracteres:\n";
    for (const std::string& p : filtrades) {
        std::cout << p << std::endl;
    }

    return 0;
}