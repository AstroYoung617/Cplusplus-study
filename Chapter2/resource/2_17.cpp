//�������³����������
#include<iostream>

int main() {
	int i, & ri = i;
	i = 5;
	ri = 10;
	//�ı�ri��ֵҲ��ı�i��ֵ
	std::cout << i << " " << ri << std::endl;
	return 0;
}
//���Ϊ10 10