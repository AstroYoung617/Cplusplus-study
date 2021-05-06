#include <iostream>
#include <string>
using std::string; 
using std::cin; using std::cout; using std::endl;

int main() {
	string s;
	//while (getline(cin, s))
	//	cout << s << endl;

	while (cin >> s)
		cout << s << endl;
	return 0;
}