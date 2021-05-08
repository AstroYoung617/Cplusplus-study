#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int main() {
	string s;
	vector<int> vec(6, 0);
	cin >> s;
	unsigned int i = 0;
	while (i != (sizeof(s) / sizeof(string)) && getline(cin, s)) {
		if (isspace(s[i]))
			++vec[5];
		switch (s[i]) {
		case 'a':
			++vec[0];
			break;
		case 'e':
			++vec[1];
			break;
		case 'i':
			++vec[2];
			break;
		case 'o':
			++vec[3];
			break;
		case 'u':
			++vec[4];
			break;
		default:
			break;
		}
		++i;
	}
	cout << "Number of vowel a: \t" << vec[0] << endl;
	cout << "Number of vowel e: \t" << vec[1] << endl;
	cout << "Number of vowel i: \t" << vec[2] << endl;
	cout << "Number of vowel o: \t" << vec[3] << endl;
	cout << "Number of vowel u: \t" << vec[4] << endl;
	cout << "Number of space: \t" << vec[5] << endl;
	return 0;
}

unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
case 'a': aCnt++;

}