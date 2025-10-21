#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;
    
    cout << "Ingrese primer numero: ";
    cin >> a;
    cout << "Ingrese segundo numero: ";
    cin >> b;
    cout << "Elija operacion (+, -, *, /): ";
    cin >> op;
    
    switch(op) {
        case '+':
            cout << "Resultado: " << a + b;
            break;
        case '-':
            cout << "Resultado: " << a - b;
            break;
        case '*':
            cout << "Resultado: " << a * b;
            break;
        case '/':
            if(b != 0)
                cout << "Resultado: " << a / b;
            else
                cout << "Error: division por cero";
            break;
        default:
            cout << "Operacion no valida";
    }
    
    return 0;
}
