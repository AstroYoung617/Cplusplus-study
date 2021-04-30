#include <iostream>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

int main()
{
    Sales_data currdata, valdata;
    if (std::cin >> currdata.bookNo >> currdata.units_sold >> currdata.revenue) {
        int cnt = 1;
        while (std::cin >> valdata.bookNo >> valdata.units_sold >> valdata.revenue) {
            if (valdata.bookNo == currdata.bookNo)
                ++cnt;
            else {
                std::cout << currdata.bookNo << " occurs " << cnt << " times "
                    << std::endl;
                currdata.bookNo = valdata.bookNo;
                currdata.units_sold = valdata.units_sold;
                currdata.revenue = currdata.revenue;
                cnt = 1;
            }
        }

        std::cout << currdata.bookNo << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}