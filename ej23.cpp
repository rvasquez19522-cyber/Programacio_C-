#include <iostream>
#include <string>
#include <cmath> // para pow
using namespace std;

// Función que convierte un número binario (string) a entero
int binarioAEntero(const string &binario) {
    int resultado = 0;
    int longitud = binario.length();

    // Recorremos la cadena de derecha a izquierda
    for (int i = 0; i < longitud; i++) {
        char c = binario[longitud - 1 - i]; // empezamos por el bit menos significativo
        if (c == '1') {
            resultado += pow(2, i); // sumamos 2^i
        } else if (c != '0') {
            cout << "Error: la cadena contiene caracteres no binarios." << endl;
            return -1;
        }
    }

    return resultado;
}

int main() {
    string binario;

    cout << "Introduce un número binario: ";
    cin >> binario;

    int entero = binarioAEntero(binario);

    if (entero != -1) {
        cout << "El número entero es: " << entero << endl;
    }

    return 0;
}