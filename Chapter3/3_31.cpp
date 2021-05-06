//3.31 编写一段程序，定义一个含有10个int的数组，令每个元素的值就是其下标值。

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
