//˵���βΡ��ֲ������Լ��ֲ���̬����������
//�βΣ������ں������β��б��е�ֵ������һ���Զ����󣬺�����ֹ���β����١�
//�ֲ������� �βμ��������ڲ�����ı�����
//�ֲ���̬������ ʹ��static���ֲ���������Ϊ�������ڹᴩ�������ü�֮���ʱ�䡣

#include <iostream>
using std::cin; using std::cout; using std::endl;
int count(int);

int count(int num) {
	int local = 0;
	static int _local ;
	if (num % 2 == 0)
		_local++;
	else
		local++;
	cout << local << " " << _local << endl;

	return 0;
}

int main() {
	int cnt;
	cin >> cnt;
	
	for (int i = 0; i < cnt; i++) {
		count(i);
	}

	return 0;
}