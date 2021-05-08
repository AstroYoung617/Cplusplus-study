#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;
using std::noskipws;

int main() {
	char ch;
	unsigned int ff = 0, fl = 0, fi = 0;
	char ch_before = '\0';
	vector<int> vec(8, 0);

	//while (cin >> noskipws >> ch) {
	while (cin.get(ch)) {
		if (isupper(ch)) 
			ch = tolower(ch);
		switch (ch) {
			case 'a' : 
				++vec[0];
				break;
			case 'e':
				++vec[1];
				break;
			case 'i':
				++vec[2];
				if (ch_before == 'f')
					++fi;
				break;
			case 'o':
				++vec[3];
				break;
			case 'u':
				++vec[4];
				break;
			case ' ':
				++vec[5];
				break;
			case '\t':
				++vec[6];
				break;
			case '\n':
				++vec[7];
				break;
			case 'f':
				if (ch_before == 'f')
					++ff;
				break;
			case 'l':
				if (ch_before == 'f')
					++fl;
				break;
			default:
				break;
		}
		ch_before = ch;
	}
	cout << "Number of vowel a: \t" << vec[0] << endl;
	cout << "Number of vowel e: \t" << vec[1] << endl;
	cout << "Number of vowel i: \t" << vec[2] << endl;
	cout << "Number of vowel o: \t" << vec[3] << endl;
	cout << "Number of vowel u: \t" << vec[4] << endl;
	cout << "Number of space  : \t" << vec[5] << endl;
	cout << "Number of ÖÆ±í·û  : \t" << vec[6] << endl;
	cout << "Number of »»ÐÐ·û  : \t" << vec[7] << endl;
	cout << "Number of ff  : \t" << ff << endl;
	cout << "Number of fl  : \t" << fl << endl;
	cout << "Number of fi  : \t" << fi << endl;
	return 0;
}