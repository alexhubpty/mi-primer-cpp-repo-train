#include <iostream>
#include <string> 
#include <vector> 

int main() {
    
    std::vector<std::string> nombres(6);

    std::cout << "Por favor, introduce 6 nombres de tus compañeros:" << std::endl;

    for (int i = 0; i < 6; ++i) {
        std::cout << "Nombre " << i + 1 << ": ";
        
        std::getline(std::cin, nombres[i]);
    }
    std::cout << "\nAquí está el listado de nombres:" << std::endl;
    
    for (int i = 0; i < 6; ++i) {
        std::cout << nombres[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
