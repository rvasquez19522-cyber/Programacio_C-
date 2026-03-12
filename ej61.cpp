#include <iostream>
#include <vector>

int main() {
    std::vector<int> parells;

    for (int i = 1; i <= 10; ++i) {
        parells.push_back(i * 2); 
    }

    std::cout << "Els 10 primers nombres parells: [";
    for (size_t i = 0; i < parells.size(); ++i) {
        std::cout << parells[i];
        if (i != parells.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}