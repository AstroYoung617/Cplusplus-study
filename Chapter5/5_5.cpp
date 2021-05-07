#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main() {
	const vector<string> grade = { "F", "D", "C", "B", "A", "S" };
	int scores;
	string level;

	while (cin >> scores) {
		if (scores < 0 || scores >100) {
			cout << "ÇëÊäÈë0-100µÄÊý" << endl;
			break;
		}
		if (scores < 60)
			level = grade[0];
		else {
			level = grade[(scores - 50) / 10];
			if (scores != 100)
				if (scores % 10 > 7)
					level += '+';
				else if (scores % 10 < 3)
					level += '-';
		}
		cout << level << endl;
	}

	return 0;
}