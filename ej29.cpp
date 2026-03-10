#include <iostream>
using namespace std;

// Función que indica si un año es de traspàs (bisiesto)
bool es_de_traspas(int any) {
    // Regla correcta:
    // divisible por 4 y no por 100, o divisible por 400
    if ((any % 4 == 0 && any % 100 != 0) || (any % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int any;
    cout << "Introdueix un any: ";
    cin >> any;

    if (es_de_traspas(any)) {
        cout << any << " és un any de traspàs." << endl;
    } else {
        cout << any << " NO és un any de traspàs." << endl;
    }

    return 0;
}