#include <cstdlib>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

/*
 *  greedy / sorting 
 */

int main() 
{
    std::size_t kirito {}, n{}; 
    std::cin >> kirito >>  n;

    std::vector<std::pair<int, int>> dragons(n);
    for (auto& [strength, bonus] : dragons)
        std::cin >> strength >> bonus;

    std::sort(dragons.begin(), dragons.end());
    
    for (const auto& [strength, bonus] : dragons)
    {
        if (kirito > strength)
        {
            kirito += bonus;
        }
        else
        {
            std::cout << "NO\n";
            return 0;
        }
    }
    std::cout << "YES\n";
    return 0;
}

