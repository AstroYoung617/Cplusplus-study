#include <iostream>

int main() {
	int val = 5;
	int* p = &val;
	std::cout << p << std::endl;
	std::cout << *p << std::endl;//�����ò�������������Щȷ��ָ����ĳ�������ָ��
	*p = 6;
	std::cout << p << std::endl;
	std::cout << val << std::endl;

	return 0;
}
