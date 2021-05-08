//while 循环特别适用于那种条件不变、反复执行操作的情况，例如，当未达到文件末尾时不断读取下一个值。for 循环更像是在按步骤迭代，它的索引值在某个范围内一次变化。根据每种循环的习惯各自编写一段程序，然后分别用另一种循环改写。如果只能使用一种循环，你倾向于哪种？为什么？

#include <iostream>
#include <cctype>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	//int i;
	//while (cin >> i) {
	//	if (i < 0) {
	//		cout << i;
	//		break;
	//	}
	//}

	//for (int i; cin >> i; ) {
	//	if (i < 0) {
	//		cout << i;
	//		break;
	//	}
	//}

	//int total = 0;
	//for (int i = 0; i < 5; i++) {
	//	total += i;
	//}
	//cout << total << endl;

	int i = 0, total = 0;
	while (i < 5) {
		total += i;
		i++;
	}

	cout << total << endl;
	return 0;
}
