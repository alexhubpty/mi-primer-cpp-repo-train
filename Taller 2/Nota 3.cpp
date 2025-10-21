#include <iostream>  
using namespace std;  

int main()
 {  
    float nota;  
    cout << "Introduce la nota: ";  
    cin >> nota;  

    if (nota < 5)  
        cout << "Suspenso";  
    else if (nota >= 5 && nota < 7)  
        cout << "Aprobado";  
    else if (nota >= 7 && nota < 9)  
        cout << "Notable";  
    else  
        cout << "Sobresaliente";  
    return 0;  
}  

