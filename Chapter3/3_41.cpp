//3.41 编写一段程序，用整型数组初始化一个vector对象

#include <iostream>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::begin; using std::end;
using std::vector;

int main() {
	int arr[] = { 1, 3, 5, 6, 7 };
	//vector<int> ivec = arr;				//使用数组初始化应该使用参数的形式，指明其位置。
	vector<int> ivec(begin(arr), end(arr)); //begin和end是内置类型数组的标准库函数，区别于vector中的。定义在iterator头文件中
	for (auto d : ivec)
		cout << d << " ";

	return 0;
}