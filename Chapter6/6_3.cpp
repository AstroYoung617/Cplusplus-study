#include <iostream>
using std::cin; using std::cout; using std::endl;
int fact(int);			//如果函数定义在主函数的后面则一定要有函数声明，声明方式和C语言如出一辙。
						//为了保险起见，我认为都应该加上函数声明。
int fact(int val) {
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

int main() {
	int num;

	cout << "请输入一个数，计算其阶乘：" << endl;
	cin >> num;
	cout << fact(num) << endl;
	return 0;
}

