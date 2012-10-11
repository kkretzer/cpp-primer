#include <iostream>

int main()
{
    int i = 10, j = 73, *p = &i;
    std::cout << "i=" << i << ", j=" << j << ", *p=" << *p << std::endl;
    p = &j;
    std::cout << "i=" << i << ", j=" << j << ", *p=" << *p << std::endl;
    *p = 52;
    std::cout << "i=" << i << ", j=" << j << ", *p=" << *p << std::endl;
    return 0;
}
