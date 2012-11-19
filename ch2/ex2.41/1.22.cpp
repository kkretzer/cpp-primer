#include <iostream>
#include "sales_data.h"

int main()
{
    Sales_data sd, sd_aggregate;
    double price;
    while (std::cin >> sd.bookNo >> sd.unitsSold >> price) {
        if (sd_aggregate.bookNo == "") {
            sd_aggregate.bookNo = sd.bookNo;
        }
        if (sd.bookNo == sd_aggregate.bookNo) {
            sd_aggregate.unitsSold += sd.unitsSold;
            sd_aggregate.revenue += sd.unitsSold * price;
        } else {
            std::cout << "Error: Sales data items must refer to the same book." << std::endl;
            return -1;
        }
    }
    std::cout << sd_aggregate.bookNo << " " << sd_aggregate.unitsSold << " " << sd_aggregate.revenue << std::endl;
    return 0;
}
