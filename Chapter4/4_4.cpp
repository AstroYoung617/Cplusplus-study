//给表达式添加括号

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
	int i = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	int j = ((12 / 3) * 4) + 5 * 15 + (24 % (4 / 2));
	cout << i <<" "<< j << endl;
	return 0;
}