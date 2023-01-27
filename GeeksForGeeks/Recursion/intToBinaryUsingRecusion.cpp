#include <iostream>
using namespace std;

void solve(int n)
{
    if (n == 0)
        return;
    solve(n / 2);
    cout << (n % 2);
}

int main()
{
    int n = 20;
    solve(n);

    return 0;
}