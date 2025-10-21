#include <iostream>
using namespace std;

int main() {
    int opcion;
    float valor, resultado;

    cout << "CONVERSOR DE UNIDADES\n";
    cout << "1. Convertir centimetros a pulgadas\n";
    cout << "2. Convertir libras a kilogramos\n";
    cout << "Seleccione una opcion (1-2): ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Ingrese la cantidad en centimetros: ";
            cin >> valor;
            resultado = valor / 2.54;
            cout << valor << " cm = " << resultado << " pulgadas\n";
            break;
        
        case 2:
            cout << "Ingrese la cantidad en libras: ";
            cin >> valor;
            resultado = valor / 2.205;
            cout << valor << " lb = " << resultado << " kg\n";
            break;
        
        default:
            cout << "Opcion no valida. Por favor seleccione 1 o 2.\n";
    }

    cout << "Gracias por usar el conversor!\n";
    return 0;
}
