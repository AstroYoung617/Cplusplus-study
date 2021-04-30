//使用自己的sales_data类重写前面的练习

#include <iostream>
#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

int main() {
	Sales_data data;
	while (std::cin >> data.bookNo >> data.revenue >> data.units_sold) 
		std::cout << data.bookNo <<" "<< data.revenue <<" "<< data.units_sold << std::endl;

	return 0;
}