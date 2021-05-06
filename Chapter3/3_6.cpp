//编写一段程序，使用范围for将一段字符串中的字母全部用X代替

#include <iostream>
#include <string>
using std::string;
using std::cin; using std::cout;
using std::endl;

int main(){
	string s(300, 'a');
	 
	for (auto &c : s) 
		c = 'X';
	cout << s << endl;
	
	return 0;
} 
