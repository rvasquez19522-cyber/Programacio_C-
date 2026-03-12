#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> concatenar_llistes(const vector<string>& llista1, const vector<string>& llista2, const string& connector) {
    vector<string> resultat;

    size_t n = llista1.size();
    if (n != llista2.size()) {
        cout << "Les llistes no tenen la mateixa mida!" << endl;
        return resultat;
    }

    for (size_t i = 0; i < n; i++) {
        resultat.push_back(llista1[i] + connector + llista2[i]);
    }

    return resultat;
}

int main() {
    vector<string> llista1 = {"sub", "supra"};
    vector<string> llista2 = {"campió", "campiona"};
    string connector = "-";  

    vector<string> resultat = concatenar_llistes(llista1, llista2, connector);

    cout << "Les paraules concatenades són: ";
    for (const string& paraula : resultat) {
        cout << paraula << " ";
    }
    cout << endl;

    return 0;
}