/**
 * Taken from http://en.cppreference.com/w/cpp/language/ub
 *
 * g++ access_out_of_bounds.cpp -O3 -o access_out_of_bounds
 */

#include <iostream>

int table[4] = {1, 2, 3, 4};
bool exists_in_table(int v)
{
    for (int i = 0; i <= 4; i++) {
        if (table[i] == v) return true;
    }
    return false;
}

int main()
{
    std::cout << exists_in_table(5) << std::endl;    // may print `1`

    return 0;
}
