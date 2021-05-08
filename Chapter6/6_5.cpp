#include <iostream>
using std::cin;using std::cout;using std::endl;
int abs(int);

int abs(int num) {
	int result;
	if (num < 0)  
		result = -1 * num;
	else
		result = num;

	return result;
}


int main() {
	int input;
	cin >> input;
	cout << abs(input) << endl;

	return 0;
}