#include <iostream>
int main()
{
    int i = 42;
    int &r1 = i;
    const int &r2 = i;

    std::cout << "i=" << i << ", r1=" << r1 << ", r2=" << r2 << std::endl;
    std::cout << "assigning 0 to r1" << std::endl;
    r1 = 0;
    std::cout << "i=" << i << ", r1=" << r1 << ", r2=" << r2 << std::endl;

    // can't do this since r2 is ref to const, even though it's underlying object is non-const
    // r2 = 2;

    return 0;
}
