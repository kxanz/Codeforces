#include <iostream>
#include <cstdint>

int main() 
{
    std::int64_t n {}, m {}, a {};
    std::cin >> n >> m >> a;

    std::int64_t across = (n + a - 1) / a;
    std::int64_t down = (m + a - 1) / a;

    std::cout << across * down;
}

/*
 * rectangler shape is n x m;
 * What is the least number of flagstones to pave the square
 * Square has to be covered
 *
 * 6 
 *    6
 *
 * erea of the sqaure is n x m
 * area of the flagstones is a x a
 * Example
 * square 6 x 6 = 36
 * flagstones 4 x 4 = 16
 *
 */
