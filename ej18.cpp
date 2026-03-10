#include <iostream>
#include <vector>

void crear_punts(const std::vector<int>& lista) {
    for (int num : lista) {
        for (int i = 0; i < num; ++i) {
            std::cout << ".";
        }
        std::cout << std::endl;
    }
}

void dibuixar_imatge() {
    std::vector<int> imatge = {1, 3, 5, 7, 9}; 
    crear_punts(imatge);
}

int main() {
    std::cout << "Imagen dibujada con puntos:\n\n";
    dibuixar_imatge();
    return 0;
}