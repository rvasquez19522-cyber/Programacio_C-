#include <iostream>
#include <string>
#include <cctype> // para tolower
using namespace std;

// Función que cuenta las vocales en una palabra
void comptar_vocals(const string &paraula) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (char c : paraula) {
        c = tolower(c); // ignorar mayúsculas/minúsculas
        switch(c) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    cout << "Hi ha " << a << " a's, "
         << e << " e's, "
         << i << " i's, "
         << o << " o's, "
         << u << " u's." << endl;
}

int main() {
    string paraula;
    cout << "Introdueix una paraula: ";
    cin >> paraula;

    comptar_vocals(paraula);

    return 0;
}