#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout; using std::endl;

int main(){
	string s(30, 'a');
	string::size_type n = 0;
	
//	while(n < s.size()){
//		s[n] = 'X';
//		n++;
//	}
//我认为for循环更好，不容易忘记添加循环终止条件 
	for(n=0; n < s.size(); n++){
		s[n] = 'X';
	}
	cout << s << endl;
	
	return 0;
}
