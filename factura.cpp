#include <iostream>
using namespace std;

int main() {
    float precio, subtotal, descuento, impuesto, total;
    int cantidad;
    
    // Pedir datos al usuario
    cout << "Precio del producto: ";
    cin >> precio;
    cout << "Cantidad: ";
    cin >> cantidad;
    
    // Calcular valores
    subtotal = precio * cantidad;
    descuento = subtotal * 0.10;  // 10% de descuento
    impuesto = (subtotal - descuento) * 0.07;  // 7% de ITBM
    total = subtotal - descuento + impuesto;
    
    // Mostrar resultados
    cout << "\n--- FACTURA ---" << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "ITBM (7%): $" << impuesto << endl;
    cout << "TOTAL: $" << total << endl;
    
    return 0;
}
