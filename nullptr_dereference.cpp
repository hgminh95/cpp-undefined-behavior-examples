/**
 * g++ nullptr_dereference.cpp -O3 -o nullptr_dereference
 */

#include <iostream>

bool foo(int *bar)
{
    int temp = *bar;

    return bar == nullptr;
}

int main() {

    // may print not null
    std::cout << (foo(nullptr) ? "null" : "not null") << std::endl;

    return 0;
}
