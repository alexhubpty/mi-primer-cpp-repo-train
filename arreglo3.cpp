#include <iostream>

int main() {
    
    int suma;
    int resta;
   
    long long producto; 
    
    int numero;

    std::cout << "Introduce 10 numeros para calcular su suma, resta y multiplicacion." << std::endl;

    std::cout << "Introduce el numero 1: ";
    std::cin >> numero;

    suma = numero;
    resta = numero;
    producto = numero;

    for (int i = 2; i <= 10; ++i) {
        std::cout << "Introduce el numero " << i << ": ";
        std::cin >> numero;
        
        suma += numero;       
        resta -= numero;      
        producto *= numero;
    }
    std::cout << "\n--------------------" << std::endl;
    std::cout << "Resultados Finales:" << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta (n1 - n2 - n3...): " << resta << std::endl;
    std::cout << "Multiplicacion: " << producto << std::endl;

    return 0;
}
