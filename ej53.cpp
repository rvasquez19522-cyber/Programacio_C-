#include <iostream>

using namespace std;

int main() {
    int contador = 0;

    for (int num = 2; num <= 100; num++) {
        bool esPrimer = true;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                esPrimer = false;
                break;
            }
        }

        if (esPrimer) {
            cout << num << " ";
            contador++;
        }
    }

    cout << endl;
    cout << "Hi ha " << contador << " numeros primers entre 1 i 100." << endl;

    return 0;
}