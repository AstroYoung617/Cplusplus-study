#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
	string finalgrade;
	int grade;

	cin >> grade;
	//finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";
	if (grade > 90)
		finalgrade = "high pass";
	if (grade > 60 && grade < 75)
		finalgrade = "low pass";
	if (grade < 60)
		finalgrade = "fail";
	
	cout << finalgrade;

	return 0;
}