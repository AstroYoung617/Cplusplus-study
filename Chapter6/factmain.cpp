#include "Chapter6.h"
#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	int num;
	do {
		cout << "请输入一个数，计算其阶乘：" << endl;
		cin >> num;
		cout << fact(num) << endl;
	} while (cin);

	return 0;
}