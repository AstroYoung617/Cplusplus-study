#include <iostream>
using std::string;
using std::cin; using std::cout; using std::endl;


struct Sales_data
{
	string bookNo;
	unsigned units_sold;
	double revenue;
};

int main() {
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += total.revenue;
			}
			else {
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				total.bookNo = trans.bookNo;
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}