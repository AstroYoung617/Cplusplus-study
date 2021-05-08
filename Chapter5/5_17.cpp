//编写两个vector比较其中一个是否是另一个的前缀

#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main() {
	vector<int> ivec1 = { 1, 1, 2, 3, 4, 4, 5 };
	vector<int> ivec2 = { 1, 1, 2, 4 };
	decltype(ivec1.size()) len1 = ivec1.size();
	decltype(ivec2.size()) len2 = ivec2.size();
	auto len = len1 < len2 ? len1 : len2;
	bool flag = 1;

	for (unsigned i = 0; i != len; i++) {
		if (ivec1[i] != ivec2[i]) {
			cout << "false" << endl;
			flag = 0;
			break;
		}
	}
	if(flag == 1)
		cout << "true" << endl;
 	return 0;
}