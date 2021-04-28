//考察以下程序的输出结果
#include<iostream>

int main() {
	int i, & ri = i;
	i = 5;
	ri = 10;
	//改变ri的值也会改变i的值
	std::cout << i << " " << ri << std::endl;
	return 0;
}
//结果为10 10