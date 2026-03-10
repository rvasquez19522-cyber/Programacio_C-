#include <iostream>
#include <vector>
using namespace std;

// Funció que suma tots els elements de la llista
int sumar_llista(const vector<int>& llista) {
    int suma = 0;
    for (int num : llista) {
        suma += num;
    }
    return suma;
}

// Funció que multiplica tots els elements de la llista
int multiplicar_llista(const vector<int>& llista) {
    int producte = 1;
    for (int num : llista) {
        producte *= num;
    }
    return producte;
}

int main() {
    // Proves amb diferents llistes
    vector<int> llista1 = {1, 2, 3, 4};
    vector<int> llista2 = {5, 6, 7};
    vector<int> llista3 = {10, 0, 3};

    // Comprovació dels resultats
    cout << "Suma de llista1: " << sumar_llista(llista1) << endl; // Ha de retornar 10
    cout << "Producte de llista1: " << multiplicar_llista(llista1) << endl; // Ha de retornar 24

    cout << "Suma de llista2: " << sumar_llista(llista2) << endl; // Ha de retornar 18
    cout << "Producte de llista2: " << multiplicar_llista(llista2) << endl; // Ha de retornar 210

    cout << "Suma de llista3: " << sumar_llista(llista3) << endl; // Ha de retornar 13
    cout << "Producte de llista3: " << multiplicar_llista(llista3) << endl; // Ha de retornar 0 (perquè hi ha un 0)

    return 0;
}