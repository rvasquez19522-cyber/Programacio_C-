#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Función que elimina duplicados de una lista
vector<int> elimina_duplicats(const vector<int>& llista) {
    vector<int> nova_llista;
    unordered_set<int> vistos;

    for (int num : llista) {
        if (vistos.find(num) == vistos.end()) {
            // Si no está en el set, lo agregamos a la nueva lista
            nova_llista.push_back(num);
            vistos.insert(num);
        }
    }

    return nova_llista;
}

int main() {
    // Lista de ejemplo con duplicados
    vector<int> llista = {1, 2, 3, 2, 4, 5, 3, 6};

    cout << "Llista original: ";
    for (int num : llista) {
        cout << num << " ";
    }
    cout << endl;

    // Llamamos a la función para eliminar duplicados
    vector<int> sense_duplicats = elimina_duplicats(llista);

    cout << "Llista sense duplicats: ";
    for (int num : sense_duplicats) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}