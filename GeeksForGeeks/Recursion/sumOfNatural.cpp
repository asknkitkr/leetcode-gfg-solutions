#include <iostream>
using namespace std;

int solve(int n)
{
    if (n == 0)
        return 0;
    return n + solve(n - 1);
}

int main()
{
    int n = 100;
    cout << solve(n) << endl;

    return 0;
}