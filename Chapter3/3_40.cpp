//3.40
#include <iostream>
#include <string>
#include <cstring>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	char c1[] = "He is a man";
	char c2[] = "She is a woman";
	char c3[] = "";
	strcat(c1, c2);		//将c2连接在c1的后面 
	strcpy(c3, c1);		//将c1拷贝给c3 
	
	cout << c3 << endl;
	return 0;
}
