#include <iostream>
#include <stdexcept>
using std::cin; using std::cout; using std::endl;
using std::runtime_error;

int main() {
	int d1 = 0, d2 = 0;

	while (cin >> d1 >> d2) {
		try {
			if (d2 == 0)
				throw runtime_error("The second number can't be zero!");
			cout << d1 / d2;
		}
		catch (runtime_error err) {
			cout << err.what() << endl;
			cout << "Try again£¿(y/n)" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}

	return 0;
}