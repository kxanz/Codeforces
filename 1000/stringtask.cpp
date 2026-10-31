#include <iostream>
#include <string>
#include <cctype>
int main() 
{
    std::string s {};
    std::cin >> s;

    const std::string vowels {"aoyeui"};
    std::string result {};

    for (char c : s)
    {
        //we convert the "B" but its an int then after its converted into a char
        //to lower returns an int.
        c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        
        //find searches a string and returns where it found the character
        if (vowels.find(c) != std::string::npos)
            continue;

        result += '.';
        result += c;
    }
    std::cout << result;
}

/*
 * tour 
 * i
 * .t.r
 *
 */
