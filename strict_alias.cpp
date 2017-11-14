/**
 * g++ -O3 strict_alias.cpp -o strict_alias 
 */

#include <iostream>
#include <cstdint>

struct Msg {
    int8_t first;
    int16_t second;
    int8_t third;
};

int8_t foo(Msg* msg, int32_t *ptr)
{
    msg->first = 'a';
    *ptr = 0;

    return msg->first;
}

int main()
{
    int32_t *ptr = new int32_t;
    Msg *msg = (Msg *)ptr;

    // may print 97 and 0
    std::cout << (int) foo(msg, ptr) << std::endl;
    std::cout << (int) msg->first << std::endl;

    return 0;
}

