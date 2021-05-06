#include <iostream>
using std::cin; using std::cout; using std::endl;
using int_arr = size_t;

int main() {
	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];

	for (int_arr row = 0; row != rowCnt; ++row) {
		for (int_arr col = 0; col != colCnt; ++col)
			cout << ia[row][col] << " ";
		cout << endl;
	}
	return 0;
}