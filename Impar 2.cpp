#include <iostream>  
using namespace std;  

int main() 
{  
    int valor;  
    cout << "Introduce un numero entero: ";  
    cin >> valor;  

    if (valor % 2 == 0)  
        cout << valor << " es un numero par.";  
    else  
        cout << valor << " es un numero impar.";  
    return 0;  
}  

