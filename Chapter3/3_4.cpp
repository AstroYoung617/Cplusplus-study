//练习3.4 
#include <iostream>
using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	
//	if (s1 == s2)
//		cout << "s1 equals s2" << endl;
//	else 
//		s1 > s2 ? cout << s1 << endl : cout << s2 << endl;

	if (s1.size() == s2.size())
		cout << "s1's size equals s2's size" <<endl;
	else
		s1.size() > s2.size() ? cout << s1 << endl : cout << s2 << endl;
		
	return 0;
} 
