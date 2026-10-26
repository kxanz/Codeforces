#include <ios>
#include <iostream>

int main() 
{
    std::size_t weight {8};
    bool t { true };
    bool f { false };

    if (weight % 2 == 0) std::cout << std::boolalpha << t << "\n";
    else std::cout << std::boolalpha << f << '\n'; 

    return 0;
}
