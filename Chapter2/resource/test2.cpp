#include <iostream>

using namespace std;


int main() {
	int *p;
	int array[10];
	p = array;
	free(array);
	cout << *p << endl;

	return 0;
}
