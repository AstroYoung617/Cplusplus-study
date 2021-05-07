#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string s;
	string s_before = "";	//前一个字符串
	string s_most = "";		//当前最多的字符串
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

	cout <<"重复出现最多的单词："<< s_most << " 次数：" << (cnt+1) << endl;
	return 0;
}