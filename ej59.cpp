#include <iostream>
#include <vector>

int ComptarCoincidencies(const std::vector<int>& llista) {
    int comptador = 0;
    for (size_t i = 0; i < llista.size(); ++i) {
        if (static_cast<int>(i) == llista[i]) { 
            ++comptador;
        }
    }
    return comptador;
}

int main() {
    std::vector<int> llista;
    int n, valor;

    std::cout << "Quants nombres vols introduir? ";
    std::cin >> n;

    std::cout << "Introdueix els nombres:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> valor;
        llista.push_back(valor);
    }

    int resultat = ComptarCoincidencies(llista);
    std::cout << "Nombre d'elements que coincideixen amb el seu índex: " << resultat << std::endl;

    return 0;
}