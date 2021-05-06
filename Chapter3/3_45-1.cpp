#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	int ia[3][4];

	for (auto row : ia) {
		for (auto col : row)
			cout << col << " ";
		cout << endl;
	}
	return 0;
}