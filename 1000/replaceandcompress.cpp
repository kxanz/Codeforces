#include <iostream>

int main() 
{
    int test {};
    std::cin >> test;

    while (test--)
    {
        std::int32_t cheese {}, sausage {};
        std::cin >> cheese >> sausage;
        
        if (cheese <= sausage)
            std::cout << -1 << '\n';
        else 
            std::cout << std::min(sausage, cheese - sausage) << '\n';
    }
}

/*
 * 6 4 
 *
 */
