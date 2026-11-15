#include <iostream>
#include <vector>

int main() 
{
    size_t n {}, t{};
    std::cin >> n >> t;

    std::vector<int> a(n);
    for (int i = 1; i <= n - 1; ++i) { std::cin >> a[i]; }

    int pos {1};
    while (pos < t) { pos += a[pos]; }

    std::cout << (pos == t ? "YES" : "NO") << '\n';
    return 0;
}
