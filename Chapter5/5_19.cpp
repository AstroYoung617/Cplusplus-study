//ʹ��do whileʵ����ʾ�û���������string����Ȼ�������϶̵����


#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string s1;
	string s2;
	string ptr;
	do {
		cout << "����������string" << endl;
		cin >> s1 >> s2;
		if (s1.size() < s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;
		cout << "�Ƿ�������룿(yes / no)" << endl;
		cin >> ptr;
	} while (!ptr.empty() && ptr[0] != 'n');

	return 0;
}