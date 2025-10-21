#include <iostream>

using namespace std;

int main() {
    // Datos de la empresa
    cout << "       UMBRELLA CORP." << endl;
    
    cout << "Direccion: Av. Principal 507WEST" << endl;
    cout << " Telefono: 800 - 8888" << endl;
    cout << "--------------------------------" << endl;
    cout << "CALCULADORA DE AUMENTO SALARIAL" << endl;
    cout << "--------------------------------" << endl;
    
    double salario_actual, aumento, nuevo_salario;
    
    // Solicitar salario actual
    cout << "Ingrese el Salario Actual del Trabajador: $";
    cin >> salario_actual;
    
    // Calcular aumento según rango salarial
    if (salario_actual <= 500.00) {
        aumento = salario_actual * 0.20;
    } 
    else if (salario_actual <= 1000.00) {
        aumento = salario_actual * 0.10;
    } 
    else if (salario_actual <= 2000.00) {
        aumento = salario_actual * 0.05;
    } 
    else {
        aumento = salario_actual * 0.03;
    }
    
    // Calcular nuevo salario
    nuevo_salario = salario_actual + aumento;
    
    // Mostrar resultados
  
    cout << "--------------------------------" << endl;
    cout << "RESULTADOS:" << endl;
    cout << "Salario Actual: $" << salario_actual << endl;
    cout << "Aumento Aplicado: $" << aumento << endl;
    cout << "Salario Total: $" << nuevo_salario << endl;
    
    return 0;
}
