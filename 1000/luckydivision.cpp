#include <iostream>

int main() 
{
    int num {};
    std::cin >> num;

    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    
    for (int x : lucky)
    {
        if (num % x == 0)
        {
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
    return 0;

}
