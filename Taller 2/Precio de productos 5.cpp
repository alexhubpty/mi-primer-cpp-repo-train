#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double p1, p2, p3, p4, subtotal, descuento, itbm, total;

    cout << "Ingrese precio producto 1: ";
    cin >> p1;
    cout << "Ingrese precio producto 2: ";
    cin >> p2;
    cout << "Ingrese precio producto 3: ";
    cin >> p3;
    cout << "Ingrese precio producto 4: ";
    cin >> p4;

    subtotal = p1 + p2 + p3 + p4;

    if(subtotal <= 20.00) {
        descuento = subtotal * 0.05;
    }
    else if(subtotal <= 50.00) {
        descuento = subtotal * 0.08;
    }
    else if(subtotal <= 100.00) {
        descuento = subtotal * 0.10;
    }
    else {
        descuento = subtotal * 0.12;
    }

    itbm = (subtotal - descuento) * 0.07;
    total = subtotal - descuento + itbm;

    cout << fixed << setprecision(2);
    cout << "\nSubtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "ITBM (7%): $" << itbm << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}
