#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout; using std::endl;

int main(){
	string s(30, 'a');
	string::size_type n = 0;
	
//	while(n < s.size()){
//		s[n] = 'X';
//		n++;
//	}
//����Ϊforѭ�����ã��������������ѭ����ֹ���� 
	for(n=0; n < s.size(); n++){
		s[n] = 'X';
	}
	cout << s << endl;
	
	return 0;
}
