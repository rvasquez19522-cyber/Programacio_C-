#include <iostream>
using namespace std;

int main() {
    int num;
    int digits = 0;
    cin >> num;

    if (num < 1 || num > 900000) {
        cout << "Numero fora de rang!" << endl;
        return 0;
    }

    while (num > 0) {
        num = num / 10;
        digits++;
    }

    cout << "El numero te " << digits << " digits." << endl;

    return 0;
}