#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list<string> files = {"70","71","72","73","74","75","76","77"};
	 
	files.pop_front();
	
	
	for (string six : files){
		cout<< six << "\n";
	}
			
	return 0;
}
