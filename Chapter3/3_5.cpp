//3.5 

#include <iostream>
using std::cin; using std::cout;
using std::string; using std::endl;

int main(){
	string total;
	string temple;
	while(cin >> temple){
//		total += temple;
		total += temple + " ";
	}
	
	cout << total << endl;
	return 0;
} 
