#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Genera un código secreto de 4 dígitos únicos (0-9)
string generarCodigo() {
    vector<int> digitos = {0,1,2,3,4,5,6,7,8,9};
    random_shuffle(digitos.begin(), digitos.end());
    string codigo = "";
    for (int i = 0; i < 4; i++) {
        codigo += to_string(digitos[i]);
    }
    return codigo;
}

// Evalúa un intento: devuelve correctos (posición correcta) y coincidencias (misma cifra, posición incorrecta)
void evaluarIntento(const string &codigo, const string &intento, int &correctos, int &coincidencias) {
    correctos = 0;
    coincidencias = 0;

    bool usadoCodigo[4] = {false,false,false,false};
    bool usadoIntento[4] = {false,false,false,false};

    // Contar correctos (posición correcta)
    for (int i = 0; i < 4; i++) {
        if (intento[i] == codigo[i]) {
            correctos++;
            usadoCodigo[i] = true;
            usadoIntento[i] = true;
        }
    }

    // Contar coincidencias (posición incorrecta)
    for (int i = 0; i < 4; i++) {
        if (usadoIntento[i]) continue;
        for (int j = 0; j < 4; j++) {
            if (usadoCodigo[j]) continue;
            if (intento[i] == codigo[j]) {
                coincidencias++;
                usadoCodigo[j] = true;
                usadoIntento[i] = true;
                break;
            }
        }
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    string codigoSecreto = generarCodigo();
    // Mostrar código secreto para pruebas:
    cout << "Codi secret (proves): " << codigoSecreto << endl;

    string intento;
    int correctos, coincidencias;
    int numIntentos = 0;

    cout << "Benvingut a MasterMind simplificat!\n";
    cout << "Introdueix codis de 4 dígits únics fins que encertis el codi secret.\n\n";

    do {
        cout << "Introdueix el teu intent: ";
        cin >> intento;

        if (intento.length() != 4) {
            cout << "Error: el codi ha de tenir 4 dígits.\n";
            continue;
        }

        // Verificar que los dígitos son únicos
        bool repetido = false;
        for (int i = 0; i < 4 && !repetido; i++) {
            for (int j = i+1; j < 4; j++) {
                if (intento[i] == intento[j]) repetido = true;
            }
        }
        if (repetido) {
            cout << "Error: els dígits han de ser únics.\n";
            continue;
        }

        numIntentos++;
        evaluarIntento(codigoSecreto, intento, correctos, coincidencias);

        cout << "Dígits correctes en la posició correcta: " << correctos << endl;
        cout << "Dígits correctes en la posició incorrecta: " << coincidencias << endl << endl;

    } while (correctos != 4);

    cout << "Enhorabona! Has encertat el codi secret: " << codigoSecreto 
         << " en " << numIntentos << " intents.\n";

    return 0;
}