#include <iostream>
#include "Chapter6.h"
using std::cin; using std::cout; using std::endl;
//int fact(int);			//��������������������ĺ�����һ��Ҫ�к���������������ʽ��C�������һ�ޡ�
						//Ϊ�˱������������Ϊ��Ӧ�ü��Ϻ���������

int main() {
	int num;

	cout << "������һ������������׳ˣ�" << endl;
	cin >> num;
	cout << fact(num) << endl;
	return 0;
}

int fact(int val) {
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}
