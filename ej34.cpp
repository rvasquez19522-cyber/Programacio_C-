#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Introdueix un número menor que 100: ";
    cin >> n;
    if (n >= 100) {
        cout << "El número ha de ser menor que 100!" << endl;
        return 1;
    }
    int suma = 0;
    for (int i = n; i >= 0; i -= 4) {
        suma += i * i;
    }
    cout << "La suma dels quadrats dels números és: " << suma << endl;

    return 0;
}