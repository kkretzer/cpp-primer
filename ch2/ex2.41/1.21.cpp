#include <iostream>
#include "sales_data.h"

int main()
{
    Sales_data sd1, sd2;
    double price1, price2;
    std::cin >> sd1.bookNo >> sd1.unitsSold >> price1;
    std::cin >> sd2.bookNo >> sd2.unitsSold >> price2;
    if (sd1.bookNo == sd2.bookNo) {
        sd1.revenue = sd1.unitsSold * price1;
        sd2.revenue = sd2.unitsSold * price2;
        std::cout << sd1.bookNo << " " << sd1.unitsSold + sd2.unitsSold << " " << sd1.revenue + sd2.revenue << std::endl;
        return 0;
    } else {
        std::cout << "Error: Sales data items must refer to the same book.";
        return -1;
    }
}
