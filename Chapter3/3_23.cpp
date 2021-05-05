//3.23
#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main(){
	vector<int> ivec(10, 3);
	
	for(auto it = ivec.begin(); it != ivec.end(); ++it){
		*it = 2*(*it);
	}
	
	for(auto c : ivec){
		cout << c << " ";
	}
	return 0;
} 
