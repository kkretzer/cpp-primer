#include <iostream>
#include "Sales_item.h"

/*
 * sum two book sales items of the same isbn
 */
int main()
{
    Sales_item item, sum;
    std::string bookNo = "";
    std::cout << "Enter some book sales items of the same ISBN to be summed:" << std::endl;
    while (std::cin >> item) {
        if (bookNo == "") {
            bookNo = item.isbn();
        }
        if (bookNo == item.isbn()) {
            sum = sum + item;
        } else {
            std::cerr << "isbn " << item.isbn() << " does not match " << bookNo << ", stopping now." << std::endl;
            return 1;
        }
    }
    std::cout << "The sum of the items is " << sum << std::endl;
    return 0;
}
