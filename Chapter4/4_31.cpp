//在该程序中使用前置还是后置都是一样的，但是后置版本保存了它的副本，造成不必要的运算和浪费。
#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main() {
	vector<int> ivec(4, 0);
	vector<int>::size_type cnt = ivec.size();

	for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;
	for (auto i : ivec)
		cout << i << " ";

	return 0;
}