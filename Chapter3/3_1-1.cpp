//使用自己的sales_data类重写前面的练习

#include <iostream>
#include <string>
using std::string;
using std::cin; using std::cout; using std::endl;


struct Sales_data
{
	string bookNo;
	unsigned units_sold;
	double revenue;
};

int main() {
	Sales_data data;
	while (cin >> data.bookNo >> data.revenue >> data.units_sold)
		cout << data.bookNo << " " << data.revenue << " " << data.units_sold << endl;

	return 0;
}