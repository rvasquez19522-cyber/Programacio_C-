#include <iostream>
#include <vector>
#include <cctype> // para tolower
using namespace std;

// Función que cuenta cuántos nombres comienzan por la letra indicada
int nums_que_comencen_per(const vector<string> &noms, char lletra) {
    int contador = 0;
    lletra = tolower(lletra); // Ignorar mayúsculas/minúsculas

    for (const string &nom : noms) {
        if (!nom.empty() && tolower(nom[0]) == lletra) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int n;
    char lletra;
    
    cout << "Quants noms vols introduir? ";
    cin >> n;
    cin.ignore(); // limpiar buffer

    vector<string> noms(n);
    for (int i = 0; i < n; i++) {
        cout << "Nom #" << i+1 << ": ";
        getline(cin, noms[i]);
    }

    cout << "Introdueix la lletra per buscar: ";
    cin >> lletra;

    int total = nums_que_comencen_per(noms, lletra);
    cout << "Hi ha " << total << " noms que comencen per '" << lletra << "'." << endl;

    return 0;
}