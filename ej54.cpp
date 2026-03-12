#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

vector<int> lenp(const string& frase) {
    vector<int> longitudes;  
    stringstream ss(frase);  
    string palabra;

    while (ss >> palabra) {
        longitudes.push_back(palabra.length());
    }

    return longitudes;
}

int main() {
    string frase;

    cout << "Introduce una frase: ";
    getline(cin, frase);  

    vector<int> resultado = lenp(frase);

    cout << "Longitud de cada palabra: ";
    for (int longitud : resultado) {
        cout << longitud << " "; 
    }
    cout << endl;

    return 0;
}