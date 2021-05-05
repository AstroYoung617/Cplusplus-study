//3.22 

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
	
	for(auto it = res.begin(); it != res.end() && !(*it).empty(); ++it){  		//it->empty()
		for(auto i = it->begin(); i != it->end() && !isspace(*i); ++i){
			*i = toupper(*i);
		}
	}
	
	for(auto c : res)
		cout << c << endl;
	return 0;
}
