#include <iostream>
using namespace std;

int main() {
    cout << "** TIENDA ANIVERSARIO **\n";
    cout << "Oferta especial por dia\n\n";

    float total;
    cout << "Total de compra: $";
    cin >> total;

    int dia;
    cout << "\nDia (1:Lun, 2:Mar, 3:Mie, 4:Jue, 5:Vie, 6:Sab, 7:Dom): ";
    cin >> dia;

    float descuento;
    switch(dia) {
        case 1: descuento = total * 0.15; break; // Lunes 15%
        case 2: descuento = total * 0.10; break; // Martes 10%
        case 3: descuento = total * 0.05; break; // Miércoles 5%
        case 4: descuento = total * 0.25; break; // Jueves 25%
        case 5: descuento = total * 0.08; break; // Viernes 8%
        case 6: descuento = total * 0.12; break; // Sábado 12%
        case 7: descuento = total * 0.20; break; // Domingo 20%
        default: 
            cout << "Dia incorrecto";
            return 1;
    }

    cout << "\nDescuento: $" << descuento;
    cout << "\nTotal a pagar: $" << total - descuento;
    cout << "\nGracias por su compra!";

    return 0;
}
