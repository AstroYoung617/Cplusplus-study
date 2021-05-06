#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::begin; using std::end;

int main() {
	int ia[3][4];

	for (auto p = begin(ia); p != end(ia); ++p) {
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << " ";
		cout << endl;
	}

	return 0;
}