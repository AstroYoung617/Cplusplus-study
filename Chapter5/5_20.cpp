//��ȡstring���������ֱ������������ͬ�ĵ��ʻ������е��ʶ�����Ϊֹ��

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