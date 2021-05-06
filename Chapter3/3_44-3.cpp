#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::begin; using std::end;
using int_arr = int[4];

int main() {
	int ia[3][4];

	for (int_arr *p(begin(ia)); p != end(ia); ++p) {
		for (int (*q)(begin(*p)); q != end(*p); ++q)
			cout << *q << " ";
		cout << endl;
	}

	return 0;
}