//3.17

#include <iostream>
#include <string>
#include <vector>
using std:: cin; using std::cout; using std::endl;
using std::string; using std::vector;

int main(){
	vector<string> res;
	
	string c;
	while(cin >> c){
		res.push_back(c);		//��ȡ���룬�������뵽������ 
	}
	
	for(auto &c : res){			//��ȡÿһ��Ԫ�أ�����תΪ��д 
		for(auto &s : c){
			s = toupper(s);
		}
	}
	
	for(auto c : res)
		cout << c << endl;
	return 0;
}
