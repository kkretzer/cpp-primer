#include <iostream>
#include <map>
#include "Sales_item.h"

/*
 * count the number of transactions per ISBN
 */
int main()
{
    std::map<std::string, int> counts;
    Sales_item item;
    std::cout << "Enter some book sales items:" << std::endl;
    while (std::cin >> item) {
        if (counts.count(item.isbn()) == 0) {
            counts[item.isbn()] = 1;
        } else {
            counts[item.isbn()]++;
        }
    }
    for (const auto &i : counts) {
        std::cout << i.first << ": " << i.second << " transactions" << std::endl;
    }
    return 0;
}
