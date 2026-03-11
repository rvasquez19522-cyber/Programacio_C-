#include <iostream>
#include <vector>
using namespace std;

// Función que elimina el primer y el último elemento de un vector
vector<int> eliminarcapicua(const vector<int>& llista) {
    vector<int> novaLlista;
    if (llista.size() > 2) {
        for (size_t i = 1; i < llista.size() - 1; ++i) {
            novaLlista.push_back(llista[i]);
        }
    }
    return novaLlista;
}

int main() {
    int n, valor;
    vector<int> llista;

    // Pedir al usuario la cantidad de elementos
    cout << "Quants elements vols introduir a la llista? ";
    cin >> n;

    // Pedir al usuario los elementos de la lista
    cout << "Introdueix els elements de la llista:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> valor;
        llista.push_back(valor);
    }

    // Mostrar la lista original
    cout << "Llista original: ";
    for (int num : llista) {
        cout << num << " ";
    }
    cout << endl;

    // Llamar a la función eliminarcapicua
    vector<int> novaLlista = eliminarcapicua(llista);

    // Mostrar la nueva lista
    cout << "Nova llista sense el primer i darrer element: ";
    for (int num : novaLlista) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}