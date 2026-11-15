#include <iostream>
#include <unordered_map>
#include <string>

int main() 
{
    size_t score {};
    std::cin >> score;
    
    std::unordered_map<std::string, size_t> freq;
    
    while (score--)
    {
        std::string team {};
        std::cin >> team;
        freq[team]++; 
    }

    std::string winner {};
    size_t maxGoals {};

    for (const auto& [team, goals] : freq)
    { 
        if (goals > maxGoals)
        {
            maxGoals = goals;
            winner = team;
        }
    }
    std::cout << winner << '\n';
    return 0;
}
