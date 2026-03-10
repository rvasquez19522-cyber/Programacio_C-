#include <iostream>
#include <vector>
#include <cctype> // para toupper o tolower
using namespace std;

// Función que cuenta cuántos nombres comienzan por la letra 'a'
int nums_que_comencen_per(const vector<string> &noms) {
    int contador = 0;
    for (const string &nom : noms) {
        if (!nom.empty() && tolower(nom[0]) == 'a') { // ignorar mayúsculas/minúsculas
            contador++;
        }
    }
    return contador;
}

int main() {
    int n;
    cout << "Quants noms vols introduir? ";
    cin >> n;
    cin.ignore(); // limpiar buffer

    vector<string> noms(n);
    for (int i = 0; i < n; i++) {
        cout << "Nom #" << i+1 << ": ";
        getline(cin, noms[i]);
    }

    int total = nums_que_comencen_per(noms);
    cout << "Hi ha " << total << " noms que comencen per 'a'." << endl;

    return 0;
}