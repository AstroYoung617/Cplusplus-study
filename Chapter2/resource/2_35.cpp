//�ж�����

#include <iostream>

int main() {
	const int i = 42;				//const int
	auto j = i;						//int����
	const auto &k = i;				//�������ã�const int&
	auto *p = &i;					//const int*
	const auto j2 = i, &k2 = i;		//j2��const int�� k2�ǳ������ã�const int&

	std::cout << decltype(k2) << std::endl;//ʹ�ø�����ڱ����ʱ��ᱨ������Կ�����ʲô���͡�
	return 0;
}