//判断类型

#include <iostream>

int main() {
	const int i = 42;				//const int
	auto j = i;						//int类型
	const auto &k = i;				//常量引用，const int&
	auto *p = &i;					//const int*
	const auto j2 = i, &k2 = i;		//j2是const int， k2是常量引用，const int&

	std::cout << decltype(k2) << std::endl;//使用该语句在编译的时候会报错，便可以看见是什么类型。
	return 0;
}