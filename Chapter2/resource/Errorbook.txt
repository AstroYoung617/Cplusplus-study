#include <iostream>

int main() {
	int val = 5;
	int* p = &val;
	std::cout << p << std::endl;
	std::cout << *p << std::endl;//解引用操作仅适用于那些确定指向了某个对象的指针
	*p = 6;
	std::cout << p << std::endl;
	std::cout << val << std::endl;

	return 0;
}
