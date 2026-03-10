#include <iostream>
#include <iomanip> // Para setw y alinear columnas
#include <string>
using namespace std;

int main() {
    int anyActual;
    const int numPersones = 4;
    string noms[numPersones];
    int anyNaixement[numPersones];
    int edats[numPersones];

    // Pedir año actual
    cout << "Introdueix l'any actual: ";
    cin >> anyActual;
    cin.ignore(); // Limpiar el buffer por si se usa getline después

    // Pedir nombres y años de nacimiento
    for (int i = 0; i < numPersones; i++) {
        cout << "Nom de la persona " << i+1 << ": ";
        getline(cin, noms[i]);

        cout << "Any de naixement de " << noms[i] << ": ";
        cin >> anyNaixement[i];
        cin.ignore(); // Limpiar buffer para el siguiente getline

        // Calcular edad
        edats[i] = anyActual - anyNaixement[i];
    }

    // Imprimir la tabla
    cout << "\n";
    cout << left << setw(15) << "Nom" 
         << setw(20) << "Data naixement" 
         << setw(10) << "Anys que farà aquest any" << endl;
    cout << string(50, '-') << endl;

    for (int i = 0; i < numPersones; i++) {
        cout << left << setw(15) << noms[i]
             << setw(20) << anyNaixement[i]
             << setw(10) << edats[i] << endl;
    }

    return 0;
}