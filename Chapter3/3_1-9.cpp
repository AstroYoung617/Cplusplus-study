#include <iostream> 
using std::cin; using std::cout;
using std::endl;

int main() {
	int v1 = 0, v2 = 0;

	cout << "Enter two numbers" << endl;
	cin >> v1 >> v2;

	if (v1 <= v2) {	//�ж����������ֵ�Ĵ�С����С�ķ���ǰ�档
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