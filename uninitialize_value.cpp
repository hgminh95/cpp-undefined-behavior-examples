/**
 * g++ uninitialize_value.cpp -O3 -o uninitialialize_value
 */

#include <iostream>

int may_always_return_1()
{
    int x;

    return x > 10 ? 1 : x;
}

int may_always_return_1_too()
{
    int x;

    return x > 10 ? x : 1;
}

int main()
{
    std::cout << may_always_return_1() << std::endl;
    std::cout << may_always_return_1_too() << std::endl;

    return 0;
}
