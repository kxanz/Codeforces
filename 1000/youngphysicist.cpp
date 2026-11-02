#include <iostream>

int main() 
{
    int num;
    std::cin >> num;

    int vx{}, vy{}, vz{};

    for (int i {}; i < num; ++i)
    {
        int x, y, z;
        std::cin >> x >> y >> z;
        vx += x;
        vy += y;
        vz += z;
    }
    std::cout << (vx == 0 && vy == 0 && vz == 0 ? "YES" : "NO" ) << std::endl; 
    return 0;
}
