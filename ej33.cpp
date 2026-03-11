#include <iostream>
#include <cmath>    // Per a pow()
#include <iomanip>  // Per a setprecision

using namespace std;

int main() {
    double capital_inicial;
    double interes;
    int anys;

    // Demanar capital inicial amb comprovació de rang
    do {
        cout << "Introdueix la quantitat a sol·licitar (50000€ - 800000€): ";
        cin >> capital_inicial;
        if (capital_inicial < 50000 || capital_inicial > 800000) {
            cout << "Error: La quantitat ha d'estar entre 50000€ i 800000€." << endl;
        }
    } while (capital_inicial < 50000 || capital_inicial > 800000);

    // Demanar interès amb comprovació de rang
    do {
        cout << "Introdueix l'interès (%) (0.5% - 13%): ";
        cin >> interes;
        if (interes < 0.5 || interes > 13) {
            cout << "Error: L'interès ha d'estar entre 0.5% i 13%." << endl;
        }
    } while (interes < 0.5 || interes > 13);

    // Demanar nombre d'anys amb comprovació de rang
    do {
        cout << "Introdueix el nombre d'anys (3 - 40): ";
        cin >> anys;
        if (anys < 3 || anys > 40) {
            cout << "Error: El nombre d'anys ha d'estar entre 3 i 40." << endl;
        }
    } while (anys < 3 || anys > 40);

    // Calcular el capital final amb la fórmula Cfinal = Cinicial * (1 + interes/100)^anys
    double capital_final = capital_inicial * pow(1 + interes / 100.0, anys);

    // Mostrar resultat amb 2 decimals
    cout << fixed << setprecision(2);
    cout << "El capital final després de " << anys << " anys serà: " << capital_final << "€" << endl;

    return 0;
}