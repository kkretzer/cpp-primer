#include <iostream>
int main()
{
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &v1, &r2 = v2;

    r1 = v2;
      
    // can't assign pointer to const int to non-const int
    // p1 = p2;

    p2 = p1;
      
    // can't assign pointer to const int to non-const int
    // p1 = p3;

    p2 = p3;

    // can't assign to reference to const
    //r2 = 0;
}
