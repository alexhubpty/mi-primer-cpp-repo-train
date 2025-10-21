#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list<string> six = {"Josefo","Donatila","Cuasimo","Leopoldo","Maximino","Juanjo"};
	 
	
	list<string>::iterator it = six.begin();
	advance(it, 3);
	cout<< "Cuarto Elemento: " << *it <<endl;	
	
	return 0;
}
