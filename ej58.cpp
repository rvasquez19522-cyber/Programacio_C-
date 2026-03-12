#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<string, int> llista_a_diccionari(const vector<string>& llista) {
    map<string, int> diccionari;

    for (size_t i = 0; i < llista.size(); i++) {
        diccionari[llista[i]] = i;
    }

    return diccionari;
}

int main() {
    vector<string> llista = {"casa", "cotxe", "cadira", "taula"};
    
    map<string, int> resultat = llista_a_diccionari(llista);

    cout << "El diccionari és: " << endl;
    for (const auto& parella : resultat) {
        cout << "{" << parella.first << ": " << parella.second << "}" << endl;
    }

    return 0;
}