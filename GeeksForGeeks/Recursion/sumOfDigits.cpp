#include <iostream>
using namespace std;

int solve(int n)
{
    if (n == 0)
        return 0;
    return solve(n / 10) + n % 10;
}

int main()
{
    int n = 2345;
    cout << solve(n) << endl;

    return 0;
}
