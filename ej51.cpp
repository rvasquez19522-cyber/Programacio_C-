#include <iostream>
#include <vector>
#include <string>

using namespace std;

void elements_parells(const vector<string>& llista) {
    cout << "Palabras en posicion par:" << endl;

    for (int i = 0; i < llista.size(); i += 2) {
        cout << llista[i] << endl;
    }
}

int main() {
    int n;
    cout << "Cuantas palabras quieres introducir? ";
    cin >> n;

    vector<string> paraules;
    string palabra;

    cout << "Introduce las palabras:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> palabra;
        paraules.push_back(palabra);
    }

    elements_parells(paraules);

    return 0;
}