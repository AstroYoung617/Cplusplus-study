#include <iostream>

int main() {
	int val = 5;
	int* p = &val;
	int vall = 10;
	std::cout << p << std::endl;
	std::cout << *p << std::endl;
	p = &vall;//��ָ��pָ�����val�ĵ�ַ
	std::cout << p << std::endl;
	std::cout << *p << std::endl;

	return 0;
}