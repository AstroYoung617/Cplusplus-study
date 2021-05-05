//3.15 ¸ÄÐ´3.14¶ÁÈë×Ö·û´®
#include <iostream>
#include <vector>
#include <string> 
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main(){
	vector<string> ivec;
	string s;
	
	while(cin >> s){
		ivec.push_back(s);
	}
	for(decltype(ivec.size()) i = 0; i < ivec.size(); i++){
		cout << ivec[i] << " ";
	}
	return 0;
} 
