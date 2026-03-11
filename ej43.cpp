#include <iostream>
#include <vector>
#include <unordered_set>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
using namespace std;

// Función que genera 20 elementos aleatorios entre 1 y 100
vector<int> llista_20_elements() {
    vector<int> llista;
    for (int i = 0; i < 20; ++i) {
        int num = rand() % 100 + 1; // Números entre 1 y 100
        llista.push_back(num);
    }
    return llista;
}

// Función que comprueba si hay duplicados
bool hi_ha_duplicats(const vector<int>& llista) {
    unordered_set<int> elements;
    for (int num : llista) {
        if (elements.find(num) != elements.end()) {
            return true;
        }
        elements.insert(num);
    }
    return false;
}

int main() {
    srand(time(0)); // Inicializar semilla aleatoria

    // Generar la lista de 20 elementos aleatorios
    vector<int> llista = llista_20_elements();

    // Mostrar la lista generada
    cout << "Llista generada: ";
    for (int num : llista) {
        cout << num << " ";
    }
    cout << endl;

    // Comprobar si hay duplicados
    if (hi_ha_duplicats(llista)) {
        cout << "La llista té elements duplicats." << endl;
    } else {
        cout << "La llista NO té elements duplicats." << endl;
    }

    return 0;
}