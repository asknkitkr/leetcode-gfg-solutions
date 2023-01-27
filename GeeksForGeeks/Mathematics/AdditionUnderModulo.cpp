#include <iostream>

#define MOD 1000000007

int main()
{
    long long int a, b;
    std::cin >> a >> b;

    long long int c = (a + b) % MOD;
    std::cout << c;
}