//3.37

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char *cp = ca;
	while(*cp) {
		cout << *cp << endl;
		++cp;
	}
	
	return 0;
}

//输出hello每一个字母换行，同时因为没有结尾空字符，最后输出一个不在数组中的值 

 
