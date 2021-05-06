#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];

	for (auto row = 0; row != rowCnt; ++row) {
		for (auto col = 0; col != colCnt; ++col)
			cout << ia[row][col] << " ";
		cout << endl;
	}
	return 0;
}