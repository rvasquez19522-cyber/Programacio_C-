#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string paraula;
    
    std::cout << "Introdueix una paraula: ";
    std::cin >> paraula; 

    std::vector<char> lletres;
    for (char c : paraula) {
        lletres.push_back(c);  
    }

    std::cout << "Llista de lletres: [";
    for (size_t i = 0; i < lletres.size(); ++i) {
        std::cout << "'" << lletres[i] << "'";
        if (i != lletres.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}