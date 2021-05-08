//读取string对象的序列直到出现两个相同的单词或者所有单词都读完为止。

#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string s;
	string s_before = "";
	bool flag = 0;

	while (cin >> s) {
		if (s_before == s) {
			cout << s;
			flag = 1;
			break;
		}
		s_before = s;
	}
	if (flag == 0)
		cout << "no repeat" << endl;

	return 0;
}