//3.31 ��дһ�γ��򣬶���һ������10��int�����飬��ÿ��Ԫ�ص�ֵ�������±�ֵ��

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	int arr[10] = {0};
	
	for (int a = 0; a < 10; a++) {
		arr[a] = a;
	}
	
	for (auto c : arr){
		cout << c << " "; 
	}
	return 0;
} 
