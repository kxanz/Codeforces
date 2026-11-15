#include <iostream>
#include <vector>

int main() 
{
    size_t test_cases {};
    std::cin >> test_cases;

    while (test_cases--)
    {
        size_t n {}, divisble {};
        std::cin >> n >> divisble;
        
        std::vector<int> arr(n);
        for (auto num : arr) 
            std::cin >> num;

        size_t product {1};
        for (const auto& prd : arr) product *= prd;

        size_t changes {};
        
        for (const auto& it {arr.begin()}; i != arr.end(); ++it)
        {
           if (product % divisble == 0)
           {
               std::min()
           }
        }

    }
    std::cout << changes << '\n';
    return 0;
}
/**
 * 1) multiply each element to aquire the product num
 *      i. we check if the product is divisble
 */
