#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// Función que lee un archivo y convierte cada palabra en un elemento de la lista
vector<string> crear_llista_fitxer(const string& nom_fitxer) {
    vector<string> llista;
    ifstream fitxer(nom_fitxer);

    if (!fitxer) {
        cerr << "Error: no s'ha pogut obrir el fitxer " << nom_fitxer << endl;
        return llista;
    }

    string paraula;
    while (fitxer >> paraula) {
        llista.push_back(paraula);
    }

    fitxer.close();
    return llista;
}

int main() {
    string nom_fitxer;
    cout << "Introdueix el nom del fitxer: ";
    cin >> nom_fitxer;

    vector<string> llista = crear_llista_fitxer(nom_fitxer);

    if (!llista.empty()) {
        cout << "Paraules llegides del fitxer:" << endl;
        for (const string& paraula : llista) {
            cout << paraula << " ";
        }
        cout << endl;
    } else {
        cout << "No s'han llegit paraules del fitxer." << endl;
    }

    return 0;
}