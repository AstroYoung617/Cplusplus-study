//3.32
#include <iostream>
#include <vector>
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
	vector<int> arr(10, 0);
	vector<int> arr1;
	for (int a = 0; a < 10; a++) {
		arr[a] = a;
	}
	arr1 = arr;
	for (auto c : arr1){
		cout << c << " ";
	}
	return 0;
} 
