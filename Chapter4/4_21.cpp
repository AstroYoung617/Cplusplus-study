#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main() {
	vector<int> ivec = { 3,4,5,6,7,8,9,10 };

	for (auto& i : ivec) {
		if (i % 2)
			i = 2 * i;
	}

	for (auto i : ivec) {
		cout << i << " ";
	}
	return 0;
}