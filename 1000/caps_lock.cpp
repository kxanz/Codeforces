#include <algorithm>
#include <iostream>
#include <string>
#include <cctype>

int main() 
{
    std::string str {};
    std::cin >> str;

    bool allCaps = std::all_of(str.begin(), str.end(), [](unsigned char c) 
            { return std::isupper(c); });
    
    for (char& ch : str)
    {
        if (allCaps || std::islower(static_cast<unsigned char>(ch)))
        {
            std::transform(str.begin(), str.end(), str.begin(), [] (unsigned char ch) 
                    { return static_cast<char>(std::tolower(ch)); });
            str[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(str[0])));
        }
    }
    std::cout << str << '\n';
    return 0;
}
