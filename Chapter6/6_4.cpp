#include <iostream>
#include "Chapter6.h"
using std::cin; using std::cout; using std::endl;
//int fact(int);			//��������������������ĺ�����һ��Ҫ�к���������������ʽ��C�������һ�ޡ�
						//Ϊ�˱������������Ϊ��Ӧ�ü��Ϻ���������
int fact(int val) {
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

int main() {
	int num;
	do {
		cout << "������һ������������׳ˣ�" << endl;
		cin >> num;
		cout << fact(num) << endl;
	} while (cin);

	return 0;
}

