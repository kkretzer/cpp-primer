#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

    std::cout << "i=" << i << std::endl
        << "i=" << i << std::endl
        << "r=" << r << std::endl
        << "a=" << a << std::endl
        << "ci=" << ci << std::endl
        << "cr=" << cr << std::endl
        << "b=" << b << std::endl
        << "c=" << c << std::endl
        << "*d=" << *d << std::endl
        << "*e=" << *e << std::endl
        << "f=" << f << std::endl
        << "g=" << g << std::endl;

    a = 42;
    std::cout << "after a=42" << std::endl;
    std::cout << "i=" << i << std::endl
        << "i=0?" << (i == 0) << std::endl
        << "r=0?" << (r == 0) << std::endl
        << "a=42?" << (a == 42) << std::endl
        << "ci=0?" << (ci == 0) << std::endl
        << "cr=0?" << (cr == 0) << std::endl
        << "b=0?" << (b == 0) << std::endl
        << "c=0?" << (c == 0) << std::endl
        << "*d=0?" << ((*d) == 0) << std::endl
        << "*e=0?" << ((*e) == 0) << std::endl
        << "f=0?" << (f == 0) << std::endl
        << "g=0?" << (g == 0) << std::endl;

    b = 42;
    std::cout << "after b=42" << std::endl;
    std::cout << "i=" << i << std::endl
        << "i=0?" << (i == 0) << std::endl
        << "r=0?" << (r == 0) << std::endl
        << "a=42?" << (a == 42) << std::endl
        << "ci=0?" << (ci == 0) << std::endl
        << "cr=0?" << (cr == 0) << std::endl
        << "b=42?" << (b == 42) << std::endl
        << "c=0?" << (c == 0) << std::endl
        << "*d=0?" << ((*d) == 0) << std::endl
        << "*e=0?" << ((*e) == 0) << std::endl
        << "f=0?" << (f == 0) << std::endl
        << "g=0?" << (g == 0) << std::endl;

    c = 42;
    std::cout << "after c=42" << std::endl;
    std::cout << "i=" << i << std::endl
        << "i=0?" << (i == 0) << std::endl
        << "r=0?" << (r == 0) << std::endl
        << "a=42?" << (a == 42) << std::endl
        << "ci=0?" << (ci == 0) << std::endl
        << "cr=0?" << (cr == 0) << std::endl
        << "b=42?" << (b == 42) << std::endl
        << "c=42?" << (c == 42) << std::endl
        << "*d=0?" << ((*d) == 0) << std::endl
        << "*e=0?" << ((*e) == 0) << std::endl
        << "f=0?" << (f == 0) << std::endl
        << "g=0?" << (g == 0) << std::endl;

    *d = 42;
    std::cout << "after d=42" << std::endl;
    std::cout << "i=" << i << std::endl
        << "i=42?" << (i == 42) << std::endl
        << "r=42?" << (r == 42) << std::endl
        << "a=42?" << (a == 42) << std::endl
        << "ci=0?" << (ci == 0) << std::endl
        << "cr=0?" << (cr == 0) << std::endl
        << "b=42?" << (b == 42) << std::endl
        << "c=42?" << (c == 42) << std::endl
        << "*d=42?" << ((*d) == 42) << std::endl
        << "*e=0?" << ((*e) == 0) << std::endl
        << "f=0?" << (f == 0) << std::endl
        << "g=0?" << (g == 0) << std::endl;

    // e is pointer to const, can't do this
    //*e = 42;
    //std::cout << "after e=42" << std::endl;
    //std::cout << "i=" << i << std::endl
    //    << "i=" << i << std::endl
    //    << "r=" << r << std::endl
    //    << "a=" << a << std::endl
    //    << "ci=" << ci << std::endl
    //    << "cr=" << cr << std::endl
    //    << "b=" << b << std::endl
    //    << "c=" << c << std::endl
    //    << "*d=" << *d << std::endl
    //    << "*e=" << *e << std::endl
    //    << "f=" << f << std::endl
    //    << "g=" << g << std::endl;

    // f is const, can't do this
    //f = 42;
    //std::cout << "after f=42" << std::endl;
    //std::cout << "i=" << i << std::endl
    //    << "i=" << i << std::endl
    //    << "r=" << r << std::endl
    //    << "a=" << a << std::endl
    //    << "ci=" << ci << std::endl
    //    << "cr=" << cr << std::endl
    //    << "b=" << b << std::endl
    //    << "c=" << c << std::endl
    //    << "*d=" << *d << std::endl
    //    << "*e=" << *e << std::endl
    //    << "f=" << f << std::endl
    //    << "g=" << g << std::endl;

    // g is ref to const, can't do this
    //g = 42;
    //std::cout << "after g=42" << std::endl;
    //std::cout << "i=" << i << std::endl
    //    << "i=" << i << std::endl
    //    << "r=" << r << std::endl
    //    << "a=" << a << std::endl
    //    << "ci=" << ci << std::endl
    //    << "cr=" << cr << std::endl
    //    << "b=" << b << std::endl
    //    << "c=" << c << std::endl
    //    << "*d=" << *d << std::endl
    //    << "*e=" << *e << std::endl
    //    << "f=" << f << std::endl
    //    << "g=" << g << std::endl;
    return 0;
}
