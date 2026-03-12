#include <iostream>
#include <vector>
#include <string>
#include <cctype> // para std::tolower si quieres ignorar mayúsculas/minúsculas

// Función que filtra palabras que comienzan con la letra indicada (ignorando mayúsculas/minúsculas)
std::vector<std::string> Paraules_Que_Comencen_IgnoreCase(const std::vector<std::string>& llista, char lletra) {
    std::vector<std::string> resultat;
    char lletraMinuscula = std::tolower(lletra);
    for (const std::string& paraula : llista) {
        if (!paraula.empty() && std::tolower(paraula[0]) == lletraMinuscula) {
            resultat.push_back(paraula);
        }
    }
    return resultat;
}

int main() {
    std::vector<std::string> llista;
    std::string paraula;
    int n;

    std::cout << "¿Cuántas palabras quieres introducir? ";
    std::cin >> n;

    std::cout << "Introduce las palabras:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> paraula;
        llista.push_back(paraula);
    }

    char lletra;
    std::cout << "Introduce la letra para filtrar palabras: ";
    std::cin >> lletra;

    std::vector<std::string> resultat = Paraules_Que_Comencen_IgnoreCase(llista, lletra);

    std::cout << "Palabras que comienzan con '" << lletra << "': ";
    for (const std::string& p : resultat) {
        std::cout << p << " ";
    }
    std::cout << std::endl;

    return 0;
}