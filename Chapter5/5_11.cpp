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
	vector<int> vec(8, 0);

	while (cin >> noskipws >> ch) {
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
			default:
				break;
		}
	}
	cout << "Number of vowel a: \t" << vec[0] << endl;
	cout << "Number of vowel e: \t" << vec[1] << endl;
	cout << "Number of vowel i: \t" << vec[2] << endl;
	cout << "Number of vowel o: \t" << vec[3] << endl;
	cout << "Number of vowel u: \t" << vec[4] << endl;
	cout << "Number of space  : \t" << vec[5] << endl;
	cout << "Number of ÖÆ±í·û  : \t" << vec[6] << endl;
	cout << "Number of »»ÐÐ·û  : \t" << vec[7] << endl;
	return 0;
}