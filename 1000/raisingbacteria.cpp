#include <iostream>

int main() 
{
    long long targetBacteria;
    std::cin >> targetBacteria;

    int bacteriaAdded {};
    long long remaining { targetBacteria };

    while (remaining > 0)
    {
        int lowestBid = remaining & 1;
        bacteriaAdded += lowestBid;
        remaining >>= 1;
    }
    std::cout << bacteriaAdded << '\n';
    return 0;
}
