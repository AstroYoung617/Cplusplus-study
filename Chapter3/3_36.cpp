//3.36
#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

//int main() {
//	size_t m = 5, n = 5;
//	int arr1[m] = {0};
//	int arr2[n] = {1, 2};
//	
//	if(m != n)
//		cout << "不相等" << endl;
//	
//	for(size_t i = 0; i != m; i++) {
//		if(arr1[i] != arr2[i]){
//			cout << "不相等" << endl;
//			return 0;
//		}
//	}
//	cout << "相等" << endl;
//	return 0;
//} 

int main() {
	vector<int> ivec1 = {0};
	vector<int> ivec2 = {1, 2};
	
	if (ivec1 == ivec2)
		cout << "相等" << endl;
	else 
		cout << "不相等" << endl;
	
	return 0;
}
