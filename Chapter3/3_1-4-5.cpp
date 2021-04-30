#include <iostream>
#include "Sales_data.h"
using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    Sales_data currdata, valdata;
    if (cin >> currdata.bookNo >> currdata.units_sold >> currdata.revenue) {
        int cnt = 1;
        while (cin >> valdata.bookNo >> valdata.units_sold >> valdata.revenue) {
            if (valdata.bookNo == currdata.bookNo)
                ++cnt;
            else {
                cout << currdata.bookNo << " occurs " << cnt << " times "
                    << endl;
                currdata.bookNo = valdata.bookNo;
                currdata.units_sold = valdata.units_sold;
                currdata.revenue = currdata.revenue;
                cnt = 1;
            }
        }

        cout << currdata.bookNo << " occurs " << cnt << " times " << endl;
    }
    return 0;
}