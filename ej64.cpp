#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Funció que llegeix un fitxer i retorna el seu contingut en un vector de strings (cada línia)
std::vector<std::string> LlegirFitxerSegur(const std::string& nomFitxer) {
    std::vector<std::string> contingut;
    std::ifstream fitxer(nomFitxer);

    if (!fitxer) {  // comprovem si s'ha pogut obrir el fitxer
        std::cerr << "Error: No s'ha pogut obrir el fitxer '" << nomFitxer << "'!" << std::endl;
        return contingut;  // retornem un vector buit
    }

    std::string linia;
    while (std::getline(fitxer, linia)) {
        contingut.push_back(linia);
    }

    fitxer.close();  // tanquem el fitxer
    return contingut;
}

int main() {
    std::string nomFitxer;
    std::cout << "Introdueix el nom del fitxer a llegir: ";
    std::cin >> nomFitxer;

    std::vector<std::string> dades = LlegirFitxerSegur(nomFitxer);

    if (!dades.empty()) {
        std::cout << "Contingut del fitxer:" << std::endl;
        for (const auto& linia : dades) {
            std::cout << linia << std::endl;
        }
    } else {
        std::cout << "El fitxer està buit o no es va poder llegir." << std::endl;
    }

    return 0;
}