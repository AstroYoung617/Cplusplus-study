//�ڸó�����ʹ��ǰ�û��Ǻ��ö���һ���ģ����Ǻ��ð汾���������ĸ�������ɲ���Ҫ��������˷ѡ�
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