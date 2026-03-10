#include <iostream>
#include <vector>
using namespace std;

// Función que imprime todos los números mayores que un valor dado
void mostrar_majors_que(const vector<int> &numeros, int limite) {
    cout << "Nombres majors que " << limite << ":" << endl;
    for (int num : numeros) {
        if (num > limite) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    int n, valor;
    vector<int> numeros;

    cout << "Quants nombres vols introduir? ";
    cin >> n;

    // Leer los números del usuario
    for (int i = 0; i < n; i++) {
        cout << "Introdueix el nombre #" << i+1 << ": ";
        cin >> valor;
        numeros.push_back(valor);
    }

    // Llamar a la función para mostrar los mayores de 18
    mostrar_majors_que(numeros, 18);

    return 0;
}