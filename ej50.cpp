#include <iostream>
using namespace std;

int main() {
    // Imprimir la primera part de la piràmide
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Imprimir la segona part de la piràmide
    for (int i = 2; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}