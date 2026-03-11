#include <iostream>
#include <string>

using namespace std;

// Función que determina la rima
void comprobarRima(const string &palabra1, const string &palabra2) {
    int len1 = palabra1.length();
    int len2 = palabra2.length();

    // Asegurarse de que las palabras tengan al menos 2 letras
    if (len1 < 2 || len2 < 2) {
        cout << "Las palabras son demasiado cortas para comprobar rima." << endl;
        return;
    }

    // Comprobar coincidencia de las últimas 3 letras
    if (len1 >= 3 && len2 >= 3 &&
        palabra1.substr(len1 - 3) == palabra2.substr(len2 - 3)) {
        cout << "Riman perfectamente (coinciden las últimas 3 letras)." << endl;
    }
    // Comprobar coincidencia de las últimas 2 letras
    else if (palabra1.substr(len1 - 2) == palabra2.substr(len2 - 2)) {
        cout << "Riman un poco (coinciden las últimas 2 letras)." << endl;
    }
    else {
        cout << "No riman." << endl;
    }
}

int main() {
    string palabra1, palabra2;

    cout << "Introduce la primera palabra: ";
    cin >> palabra1;

    cout << "Introduce la segunda palabra: ";
    cin >> palabra2;

    comprobarRima(palabra1, palabra2);

    return 0;
}