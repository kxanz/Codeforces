#include <iostream>
#include <string>

int main() 
{
    int n{};
    std::cin >> n;

    while (n--) 
    {
        std::string word {};
        std::cin >> word;
        std::string res {};
        res.reserve(word.size());

        std::size_t i {};
        int j = word.size() - 1;

        if (word.size() <= 10)
        { 
            std::cout << word << '\n';
        } 
        else
        {
            res.push_back(word.at(i));
            res += std::to_string(j - 1);
            res.push_back(word.at(j));
            std::cout << res << '\n';
        } 
    }
    
    return 0;

}
