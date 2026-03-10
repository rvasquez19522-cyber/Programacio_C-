#include <iostream>
#include <vector>
#include <string>

// Función que devuelve la palabra más larga de la lista
std::string paraula_mes_llarga(const std::vector<std::string>& llista) {
    if (llista.empty()) return ""; // Si la lista está vacía, devolvemos cadena vacía
    std::string mes_llarga = llista[0];
    for (const std::string& paraula : llista) {
        if (paraula.length() > mes_llarga.length()) {
            mes_llarga = paraula;
        }
    }
    return mes_llarga;
}

int main() {
    int n;
    std::cout << "¿Cuántas palabras tendrá la lista? ";
    std::cin >> n;
    std::cin.ignore(); // Limpiar el buffer de entrada

    std::vector<std::string> llista(n);
    std::cout << "Introduce las palabras:\n";
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, llista[i]);
    }

    std::cout << "La palabra más larga es: " << paraula_mes_llarga(llista) << std::endl;

    return 0;
}