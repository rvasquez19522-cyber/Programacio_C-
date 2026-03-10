#include <iostream>
using namespace std;

// Funció que comprova si un caràcter és una vocal
bool esVocal(char c) {
    // Convertir el caràcter a minúscula per gestionar tant majúscules com minúscules
    c = tolower(c);
    
    // Comprovar si és una vocal
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    // Proves amb diferents exemples
    char carac1 = 'a';
    char carac2 = 'b';
    char carac3 = 'I';
    char carac4 = 'O';
    char carac5 = 'z';
    
    cout << "Es " << carac1 << " una vocal? " << (esVocal(carac1) ? "Sí" : "No") << endl;
    cout << "Es " << carac2 << " una vocal? " << (esVocal(carac2) ? "Sí" : "No") << endl;
    cout << "Es " << carac3 << " una vocal? " << (esVocal(carac3) ? "Sí" : "No") << endl;
    cout << "Es " << carac4 << " una vocal? " << (esVocal(carac4) ? "Sí" : "No") << endl;
    cout << "Es " << carac5 << " una vocal? " << (esVocal(carac5) ? "Sí" : "No") << endl;
    
    return 0;
}