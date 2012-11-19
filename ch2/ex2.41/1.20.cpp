#include <iostream>
#include "sales_data.h"

int main()
{
    Sales_data sd;
    double price;
    while (std::cin >> sd.bookNo >> sd.unitsSold >> price) {
        sd.revenue = sd.unitsSold * price;
        std::cout << sd.bookNo << " " << sd.unitsSold << " " << sd.revenue << std::endl;
    }
    return 0;
}
