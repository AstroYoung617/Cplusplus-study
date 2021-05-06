#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	int ia[3][4];

	for (int (&row)[4] : ia) {
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}
	return 0;
}