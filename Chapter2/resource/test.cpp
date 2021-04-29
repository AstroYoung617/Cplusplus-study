#include <iostream>

int main() {
	const int& p;
	std::cout << p << std::endl;
	return 0;
}

//常量引用可以绑定非常量和常量的对象、字面值。(引用必须初始化)  //其实就相当于定义了一个常量。
//非常量引用不能绑定常量的对象、字面值。是因为该引用可能会对常量进行修改吗

//常量指针需要初始化，指向常量的指针不需要初始化，（常量指针：const *int p; 指向常量的指针：const int *p）