#include <iostream>
using namespace std;

int main() {
    
    cout << "**ALMACEN EL CHUCKY**\n";
    cout << "AV. PRINCIPAL 1991 \n";
    cout << "Tel: 800 - CHUCKY \n\n";

    
    float total;
    int dia;

    
    cout << "Ingrese el total de su compra: $";
    cin >> total;
    cout << "\nSeleccione el dia de compra para su descuento:\n";
    cout << "1. Lunes     (15%)\n";
    cout << "2. Martes    (10%)\n";
    cout << "3. Miercoles (5%)\n";
    cout << "4. Jueves    (25%)\n";
    cout << "5. Viernes   (8%)\n";
    cout << "6. Sabado    (12%)\n";
    cout << "7. Domingo   (20%)\n";
    cout << "Opcion: ";
    cin >> dia;


    float descuento = 0;
    switch(dia) {
        case 1: 
            descuento = total * 0.15;
            cout << "\nDescuento del 15% por comprar el Lunes\n";
            break;
        case 2:
            descuento = total * 0.10;
            cout << "\nDescuento del 10% por comprar el Martes\n";
            break;
        case 3:
            descuento = total * 0.05;
            cout << "\nDescuento del 5% por comprar el Miercoles\n";
            break;
        case 4:
            descuento = total * 0.25;
            cout << "\nDescuento del 25% por comprar el Jueves\n";
            break;
        case 5:
            descuento = total * 0.08;
            cout << "\nDescuento del 8% por comprar el Viernes\n";
            break;
        case 6:
            descuento = total * 0.12;
            cout << "\nDescuento del 12% por comprar el Sabado\n";
            break;
        case 7:
            descuento = total * 0.20;
            cout << "\nDescuento del 20% por comprar el Domingo\n";
            break;
        default:
            cout << "\nOpcion no valida - No se aplica descuento\n";
    }


    cout << "Total compra: $" << total << endl;
    cout << "Descuento:    $" << descuento << endl;
    cout << "Total a pagar:$" << total - descuento << endl;
    

    cout << "¡Gracias por su compra!\n";

    return 0;
}
