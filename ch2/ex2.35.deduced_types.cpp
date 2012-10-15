#include <iostream>
#include <typeinfo>

int main()
{
    const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;

    std::cout << "j is int? " << (typeid(j) == typeid(int) ? "true" : "FALSE") << std::endl;
    std::cout << "k is const int &? " << (typeid(k) == typeid(const int)? "true" : "FALSE") << std::endl;
    std::cout << "p is const int *? " << (typeid(p) == typeid(const int *)? "true" : "FALSE") << std::endl;
    std::cout << "j2 is const int? " << (typeid(j2) == typeid(const int)? "true" : "FALSE") << std::endl;
    std::cout << "k2 is const int &? " << (typeid(k2) == typeid(const int &)? "true" : "FALSE") << std::endl;
    return 0;
}
