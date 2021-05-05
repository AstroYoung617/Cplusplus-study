//3.39
#include <iostream>
#include <string>
#include <cstring>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string s1 = "hello";
	string s2 = "Hello";
	
	if(s1 == s2) 
		cout << "S相等" << endl;
	else 
		cout << "S不相等" << endl;
	
	const char c1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	const char c2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	
	if(!strcmp(c1, c2))
		cout << "C相等" << endl;
	else 
		cout << "C不相等" << endl;
	return 0;
}
