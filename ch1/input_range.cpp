#include <iostream>
int main()
{
    int val1, val2, step;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> val1 >> val2;
    step = (val1 - val2) > 0 ? -1 : 1;
    std::cout << "The numbers in the range " << val1 << " to " << val2 << " are:" << std::endl;
    while (val1 != val2) {
        std::cout << val1 << std::endl;
        val1 += step;
    }
    std::cout << val1 << std::endl;
    return 0;
}
