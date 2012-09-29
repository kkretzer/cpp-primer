#include <iostream>
#include "Sales_item.h"

/*
 * read in sales items and print them
 */
int main()
{
    Sales_item item;
    std::cout << "Enter some book sales items to be echoed:" << std::endl;
    while (std::cin >> item) {
        std::cout << "\techo: " << item << std::endl;
    }
    return 0;
}
