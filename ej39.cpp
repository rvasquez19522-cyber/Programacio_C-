#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Introdueix un número: ";
    cin >> num;
    bool found = false;
    while (num > 0) {
        int digit = num % 10; 
        if (digit % 2 == 0) {  
            cout << digit << " "; 
            found = true;
        }
        num /= 10;
    }
    if (!found) {
        cout << "No hi ha dígits parells en aquest número." << endl;
    }
    return 0;
}