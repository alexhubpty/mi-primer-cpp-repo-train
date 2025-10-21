#include <iostream>  
using namespace std;  

int main()
 {  
    float nota1,nota2,nota3,promedio;
    cout << "Introduce la nota del primer parcial: ";  
    cin >> nota1;
     cout << "Introduce la nota del segundo parcial: ";  
    cin >> nota2;
     cout<< "Introduce la nota del tercer  parcial: ";  
    cin >> nota3; 
    promedio = (nota1+nota2+nota3)/3;
    
    cout<< "el promedio es:"<<  promedio << endl; 
    cout<< "la calificacion en letra es:";
    if (promedio >90) 
    cout <<"A";
    else if (promedio >80) 
    cout<< "B";
    else if (promedio >71) 
    cout<< "C"; 
    else if (promedio >60) 
    cout<< "D";
	else
	cout<<"F";

	return 0; 
}
