//while ѭ���ر������������������䡢����ִ�в�������������磬��δ�ﵽ�ļ�ĩβʱ���϶�ȡ��һ��ֵ��for ѭ���������ڰ������������������ֵ��ĳ����Χ��һ�α仯������ÿ��ѭ����ϰ�߸��Ա�дһ�γ���Ȼ��ֱ�����һ��ѭ����д�����ֻ��ʹ��һ��ѭ���������������֣�Ϊʲô��

#include <iostream>
#include <cctype>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	//int i;
	//while (cin >> i) {
	//	if (i < 0) {
	//		cout << i;
	//		break;
	//	}
	//}

	//for (int i; cin >> i; ) {
	//	if (i < 0) {
	//		cout << i;
	//		break;
	//	}
	//}

	//int total = 0;
	//for (int i = 0; i < 5; i++) {
	//	total += i;
	//}
	//cout << total << endl;

	int i = 0, total = 0;
	while (i < 5) {
		total += i;
		i++;
	}

	cout << total << endl;
	return 0;
}
