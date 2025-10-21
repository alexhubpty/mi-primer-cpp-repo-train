#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list<string> six = {"70","71","72","73","74","75","76","77",};
	 
	six.push_front("95");
	six.push_back ("100");
	
	for(string sics : six){
		cout<<sics << "\n";
	}
			
	return 0;
}
