//3.42

#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main() {
	vector<int> ivec(5, 1);
	int arr[5] = { 0 };

	for (decltype(sizeof(arr)) i = 0; i < sizeof(arr); i++) {
		arr[i] = ivec[i];
	}

	for (auto a : arr)
		cout << a << " ";
	return 0;
}