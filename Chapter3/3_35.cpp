//3.35 ��дһ�γ�������ָ�뽫�����е�Ԫ����Ϊ0

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main(){
	int arr[5] = {1, 2, 4, 5, 6};
	
	int *p = arr;
	for(int i = 0; i < 5; i++){
		*(p + i) = 0; 
	}
	for(int d : arr)
		cout << d << " ";
	return 0;
} 
