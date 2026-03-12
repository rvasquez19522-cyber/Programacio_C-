#include <iostream>
#include <vector>

int Passar_a_Numero(const std::vector<int>& llista) {
    int numero = 0;
    for (int digit : llista) {
        numero = numero * 10 + digit;
    }
    return numero;
}

int main() {
    std::vector<int> llista = {3, 4, 1, 5};
    int resultat = Passar_a_Numero(llista);
    std::cout << "El número corresponent és: " << resultat << std::endl;
    return 0;
}