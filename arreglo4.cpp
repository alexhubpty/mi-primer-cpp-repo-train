#include <iostream>

using namespace std;

int main(){
    float compra[5], suma = 0, ITBM, Subtotal, descuento, totalConDescuento;
    int i;

    for (i=0; i<5; i++) {
        cout << "Ingrese costo de producto = ";
        cin >> compra[i];
    }
  
    for (i=0; i<5; i++) suma += compra[i];

    descuento = suma * 0.40;
    totalConDescuento = suma - descuento;

    
    ITBM = totalConDescuento * 0.07;
    Subtotal = totalConDescuento + ITBM;

    
    cout << "La suma de los productos es de = " << suma << endl;
    cout << "El descuento (40%) es de = " << descuento << endl;
    cout << "Total con descuento aplicado = " << totalConDescuento << endl;
    cout << "El ITBM es = " << ITBM << endl;
    cout << "El subtotal (final a pagar) es de = " << Subtotal << endl;

    return 0;
}
