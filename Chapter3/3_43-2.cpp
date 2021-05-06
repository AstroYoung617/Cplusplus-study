#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];

	for (size_t row = 0; row != rowCnt; ++row) {
		for (size_t col = 0; col != colCnt; ++col)
			cout << ia[row][col] << " ";
		cout << endl;
	}
	return 0;
}