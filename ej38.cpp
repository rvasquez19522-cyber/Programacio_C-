#include <iostream>
using namespace std;

int main() {
    int num, suma = 0;
    cout << "Introdueix un número: ";
    cin >> num;
    while (num > 0) {
        suma += num % 10;  
        num /= 10;        
    }
    if (suma % 2 == 0) {
        cout << "La suma dels dígits és parell." << endl;
    } else {
        cout << "La suma dels dígits és senar." << endl;
    }

    return 0;
}