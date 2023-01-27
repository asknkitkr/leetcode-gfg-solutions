#include <iostream>
using namespace std;

// time complexity: O(logn)
int power(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 != 0) // (n&1) for more optimization
            res *= x;
        x *= x;
        n /= 2; // n = n >> 1 for more optimization
    }
    return res;
}

int main()
{
    int x, n;
    cin >> x >> n;

    cout << power(x, n);
}