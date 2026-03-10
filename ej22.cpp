#include <iostream>
#include <string>
using namespace std;

// Función que cuenta las letras mayúsculas en una cadena
int contarMayusculas(const string &cadena) {
    int contador = 0;
    for (char c : cadena) {
        if (c >= 'A' && c <= 'Z') {
            contador++;
        }
    }
    return contador;
}

int main() {
    string texto;

    cout << "Introduce una cadena de texto: ";
    getline(cin, texto);  // Permite leer toda la línea con espacios

    int numMayus = contarMayusculas(texto);

    cout << "La cadena contiene " << numMayus << " letras mayúsculas." << endl;

    return 0;
}