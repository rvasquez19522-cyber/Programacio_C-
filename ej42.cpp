#include <iostream>
#include <vector>
#include <unordered_set> // Para usar conjuntos y detectar duplicados
using namespace std;

// Función que comprueba si hay duplicados en la lista
bool hi_ha_duplicats(const vector<int>& llista) {
    unordered_set<int> elements;
    for (int num : llista) {
        if (elements.find(num) != elements.end()) {
            // Si ya está en el set, hay duplicado
            return true;
        }
        elements.insert(num);
    }
    return false;
}

int main() {
    int n, valor;
    vector<int> llista;

    cout << "Quants elements vols introduir a la llista? ";
    cin >> n;

    cout << "Introdueix els elements de la llista:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> valor;
        llista.push_back(valor);
    }

    if (hi_ha_duplicats(llista)) {
        cout << "La llista té elements duplicats." << endl;
    } else {
        cout << "La llista NO té elements duplicats." << endl;
    }

    return 0;
}