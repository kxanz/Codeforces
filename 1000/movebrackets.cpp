#include <iostream>
#include <string>

int main() 
{
    size_t n {};
    std::cin >> n;

    while (n--)
    {
        size_t length {};
        std::string paren {};
        std::cin >> length >> paren;
        
        int balance {}, changes {};
        for (char c : paren)
        {
            if (c == '(') { ++balance; }
            else --balance;

            if (balance < 0) 
            {
                ++changes;
                balance = 0;
            }
        
        }
        std::cout << changes << '\n';
    }
    return 0;
}

/**
 * @param s of lenght n 
 * @param n even (divisble by 2)
 * b
 */
