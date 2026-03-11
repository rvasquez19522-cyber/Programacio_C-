#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Introdueix un numero (1-20): ";
    cin >> num;

    if (num < 1 || num > 20) {
        cout << "Numero fora de rang!" << endl;
        return 0;
    }

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}