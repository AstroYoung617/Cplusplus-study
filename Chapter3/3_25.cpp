//3.25 ��дp93���õ�����ʵ�� 
#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main(){
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto it = scores.begin();
	
	while (cin >> grade) {
		if (grade <= 100)
			++*(it + grade/10);
	}
	
	for(auto c : scores){
		cout << c << " ";
		
	}
	return 0;
} 
