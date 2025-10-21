#include <iostream>
using namespace std; 
main () {
	float notas [15];
	int  i;
	
	for (i=0; i<15; i++)
	{
		cout<<"Ingrese nota = ";
		cin>>notas [i];
	}
	for (i=0; i<15; i++){
		cout<<"Nota"<<i<< "=" ; cout<<notas[i]<<endl;
	}
}
