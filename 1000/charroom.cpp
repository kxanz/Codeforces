#include <iostream>
#include <string>

int main() 
{
    std::string s {};
    std::cin >> s;
    std::string hello {"hello"};

    std::size_t i {0};
    for (auto c : s)
    {
        if (i < hello.size() && c == hello.at(i))
        {
            ++i;
        }
    }
    std::cout << (i == hello.size() ? "YES" : "NO") << '\n';
        
}
