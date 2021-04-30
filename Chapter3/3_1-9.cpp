#include <iostream> 
using std::cin; using std::cout;
using std::endl;

int main() {
	int v1 = 0, v2 = 0;

	cout << "Enter two numbers" << endl;
	cin >> v1 >> v2;

	if (v1 <= v2) {	//判断输入的两个值的大小，将小的放在前面。
		while (v1 <= v2) {
			cout << v1 << endl;
			v1++;
		}
	}
	else
		while (v2 <= v1) {
			cout << v2 << endl;
			v2++;
		}


	return 0;
}