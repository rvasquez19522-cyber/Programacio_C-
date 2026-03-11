#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Introdueix el primer nombre: ";
    cin >> num1;
    cout << "Introdueix el segon nombre: ";
    cin >> num2;

    int inici = min(num1, num2);
    int fi = max(num1, num2);
    int suma = 0;

    for (int i = inici; i <= fi; ++i) {
        suma += i;
    }

    cout << "La suma de tots els nombres entre " << num1 << " i " << num2 << " és: " << suma << endl;

    return 0;
}