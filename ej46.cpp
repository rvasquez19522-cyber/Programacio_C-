#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función que devuelve el índice de una palabra en una lista ordenada
int trobar_index_paraula(const vector<string>& llista_paraules, const string& paraula) {
    int inici = 0;
    int fi = llista_paraules.size() - 1;

    while (inici <= fi) {
        int mig = (inici + fi) / 2;

        if (llista_paraules[mig] == paraula) {
            return mig;
        } 
        else if (llista_paraules[mig] < paraula) {
            inici = mig + 1;
        } 
        else {
            fi = mig - 1;
        }
    }

    return -1; // No se ha encontrado
}

int main() {
    // Lista ordenada de palabras completamente diferentes
    vector<string> llista = {"banana", "cebra", "dau", "elefant", "flor", "giraffe", "hipopotam"};
    string buscar;

    cout << "Introdueix la paraula a cercar: ";
    cin >> buscar;

    int index = trobar_index_paraula(llista, buscar);

    if (index != -1) {
        cout << "Paraula trobada a l'índex: " << index << endl;
    } else {
        cout << "Paraula no trobada a la llista." << endl;
    }

    return 0;
}