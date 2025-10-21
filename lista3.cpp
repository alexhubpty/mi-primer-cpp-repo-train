#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list<string> six = {"Josefo","Donatila","Cuasimo","Leopoldo","Maximino","Juanjo"};
	 
	 six.front() = "Brigida";
	 six.back() = "Verdulio";
	
		cout<< six.front()<< "\n";
		cout<< six.back ()<< "\n";
	
	return 0;
}
