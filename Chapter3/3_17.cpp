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
		res.push_back(c);		//获取输入，将其推入到容器中 
	}
	
	for(auto &c : res){			//获取每一个元素，将其转为大写 
		for(auto &s : c){
			s = toupper(s);
		}
	}
	
	for(auto c : res)
		cout << c << endl;
	return 0;
}
