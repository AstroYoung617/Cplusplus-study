#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main(){
	vector<int> ivec;
	int n = 0;
	
	while(cin >> n){
		ivec.push_back(n);
	}
	for(decltype(ivec.size()) i = 0; i < ivec.size(); i++){
		cout << ivec[i] << " ";
	}
	return 0;
}
