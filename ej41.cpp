#include <iostream>
#include <vector>
using namespace std;

// Función que comprueba si la lista está ordenada
string esta_ordenada(const vector<int>& llista) {
    bool ascendente = true;
    bool descendente = true;

    for (size_t i = 1; i < llista.size(); ++i) {
        if (llista[i] > llista[i - 1]) {
            descendente = false;  // Ya no puede ser descendente
        }
        if (llista[i] < llista[i - 1]) {
            ascendente = false;   // Ya no puede ser ascendente
        }
    }

    if (ascendente) return "està ordenada de forma ascendent";
    else if (descendente) return "està ordenada de forma descendent";
    else return "no està ordenada";
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

    string resultat = esta_ordenada(llista);
    cout << "La llista " << resultat << "." << endl;

    return 0;
}