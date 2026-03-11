#include <iostream>
using namespace std;

int main() {
    //Parells
    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
    //Inparells
    for (int i = 1; i <= 100; i += 2) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}