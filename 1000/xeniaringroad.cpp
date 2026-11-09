#include <iostream>

int main() 
{
    long long houses{}, tasks{};
    std::cin >> houses >> tasks;

    long long curr{1}, total{0};
    while (tasks--)
    {
        long long task{};
        std::cin >> task;

        if (task >= curr)
            total += task - curr;
        else 
            total += houses - curr + task;
        curr = task;
    }
    std::cout << total << '\n';
    return 0;
}


