//3.41 ��дһ�γ��������������ʼ��һ��vector����

#include <iostream>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::begin; using std::end;
using std::vector;

int main() {
	int arr[] = { 1, 3, 5, 6, 7 };
	//vector<int> ivec = arr;				//ʹ�������ʼ��Ӧ��ʹ�ò�������ʽ��ָ����λ�á�
	vector<int> ivec(begin(arr), end(arr)); //begin��end��������������ı�׼�⺯����������vector�еġ�������iteratorͷ�ļ���
	for (auto d : ivec)
		cout << d << " ";

	return 0;
}