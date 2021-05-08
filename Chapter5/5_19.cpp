//使用do while实现提示用户输入两个string对象，然后挑出较短的输出


#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string s1;
	string s2;
	string ptr;
	do {
		cout << "请输入两个string" << endl;
		cin >> s1 >> s2;
		if (s1.size() < s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;
		cout << "是否继续输入？(yes / no)" << endl;
		cin >> ptr;
	} while (!ptr.empty() && ptr[0] != 'n');

	return 0;
}