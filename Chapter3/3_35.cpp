//3.35 编写一段程序，利用指针将数组中的元素置为0

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
