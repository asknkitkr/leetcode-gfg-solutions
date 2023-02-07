#include <iostream>
using namespace std;

int solve(int n, int k)
{
    if (n == 0 || n == 1)
        return k;
    return solve(n - 1, k * n);
}

int main()
{
    int n = 10;
    cout << solve(n, 1) << endl;
}