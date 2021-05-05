//ÐÞ¸Ä3.6 

#include <iostream>
#include <string>
using std::string;
using std::cin; using std::cout;
using std::endl;

int main(){
	string s(300, 'a');
	 
	for (char &c : s) 
		c = 'X';
	cout << s << endl;
	
	return 0;
} 
