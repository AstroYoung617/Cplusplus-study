#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	int num;

	while (cin >> num) {
		if (num == 42)
			break;
	}
	return 0;
}