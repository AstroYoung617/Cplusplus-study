#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string s;
	string s_before = "";	//ǰһ���ַ���
	string s_most = "";		//��ǰ�����ַ���
	int cnt = 0;
	int t_cnt = 0;

	while (cin >> s) {
		if (s == s_before) {
			t_cnt++;
			if (t_cnt > cnt) {
				s_most = s;
				cnt = t_cnt;
			}
		}
		else {
			t_cnt = 0;
		}
		s_before = s;
	}

	cout <<"�ظ��������ĵ��ʣ�"<< s_most << " ������" << (cnt+1) << endl;
	return 0;
}