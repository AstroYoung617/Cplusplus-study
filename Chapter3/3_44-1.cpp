#include <iostream>
using std::cin; using std::cout; using std::endl;
using int_array = int [4];
int main() {
	int ia[3][4];

	for (int_array &row : ia) {
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}
	return 0;
}