#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

// Funció on expliquem què passa
void intro() {
    cout << "En una època on els gegants governen Menorca. Nosaltres necessitem menjar,\n"
         << "Estem seguint el rastre de l'olor del menjar, però ens trobem en una cruïa.\n"
         << "Al final de cada camí hi ha un talaiot, en un viuen els gegants bons que ens convidaran\n"
         << "i en l'altre són uns caníbals afamats, i ens menjaran just ens vegin.\n";
}

// Funció on demanem a quin talaiot volem anar
string canviTalaiot() {
    string talaiot;
    while (talaiot != "1" && talaiot != "2") {
        cout << "A quin Talaiot vols anar? Introdueixi 1 o 2: ";
        cin >> talaiot;
    }
    return talaiot;
}

// Funció que ens indica si compartiran el menjar o serem nosaltres el seu àpat
// Retorna true si el jugador sobreviveix, false si perd
bool trobada(string canviTalaiot) {
    cout << "T'estas apropant al talaiot...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Està fosc i és tenebrós...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Un gran gegant salta davant teu, t'agafa i ...\n\n";
    this_thread::sleep_for(chrono::seconds(2));

    int gegantamic = rand() % 2 + 1;
    if (canviTalaiot == to_string(gegantamic)) {
        cout << "Et convida a menjar!\n\n";
        return true; // el jugador sobreviveix
    } else {
        cout << "Se't menja d'un mos...ÑAMÑAMÑAM\n\n";
        return false; // el jugador perd
    }
}

// Funció principal
int main() {
    srand(static_cast<unsigned int>(time(0))); // inicializar semilla de números aleatorios

    string partidaNova = "si";

    while (partidaNova == "s" || partidaNova == "si") {
        int punts = 0; // reiniciar puntos al empezar una partida
        bool continuar = true;

        while (continuar) {
            intro();
            string nTalaiot = canviTalaiot();
            bool victoria = trobada(nTalaiot);

            if (victoria) {
                punts++;
                cout << "Punts actuals: " << punts << "\n\n";
                cout << "Vols seguir jugant? (si/no): ";
                string seguir;
                cin >> seguir;
                if (seguir != "si" && seguir != "s") {
                    continuar = false;
                    cout << "Has acabat la partida amb " << punts << " punts.\n\n";
                }
            } else {
                continuar = false;
                cout << "Has perdut! Punts totals: " << punts << "\n\n";
            }
        }

        cout << "Vols iniciar una nova partida? (si/no): ";
        cin >> partidaNova;
        cout << "\n";
    }

    return 0;
}