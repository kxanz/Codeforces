#include <iostream>
#include <algorithm>

int main() 
{
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

    int best = std::max({
        a + b + c,
        a + b * c,
        a * b + c,
        a * b * c,
        (a + b) * c,
        a * (b + c)
            });

    std::cout << best << '\n';

    return 0;
}






/*
int main() 
{
    std::int32_t num {};
    std::cin >> num; 

    std::int32_t numone {};
    std::cin >> numone;

    std::int32_t numtwo {};
    std::cin >> numtwo;

    int exp_one { num + (numone * numtwo) };
    int exp_two { num * (numone + numtwo) };
    int exp_three { num * numone * numtwo };
    int exp_fourth { (num + numone) * numtwo };

    int max = std::max({exp_one, exp_two, exp_three, exp_fourth});
    
    std::cout << max << '\n'; 
 
    return 0;
}
*/
