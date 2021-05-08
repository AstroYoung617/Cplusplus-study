//说明形参、局部变量以及局部静态变量的区别。
//形参：定义在函数的形参列表中的值，它是一种自动对象，函数终止，形参销毁。
//局部变量： 形参及函数体内部定义的变量。
//局部静态变量： 使用static将局部变量声明为生命周期贯穿函数调用及之后的时间。

#include <iostream>
using std::cin; using std::cout; using std::endl;
int count(int);

int count(int num) {
	int local = 0;
	static int _local ;
	if (num % 2 == 0)
		_local++;
	else
		local++;
	cout << local << " " << _local << endl;

	return 0;
}

int main() {
	int cnt;
	cin >> cnt;
	
	for (int i = 0; i < cnt; i++) {
		count(i);
	}

	return 0;
}