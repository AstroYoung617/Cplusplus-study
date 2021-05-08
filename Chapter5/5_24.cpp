#include <iostream>
#include <stdexcept>
using std::cin; using std::cout; using std::endl;
using std::runtime_error;

int main() {
	int d1 = 0, d2 = 0;

	cin >> d1 >> d2;

	if (d2 == 0)
		throw runtime_error("The second number can't be zero!");

	cout << d1 / d2;
	return 0;
}