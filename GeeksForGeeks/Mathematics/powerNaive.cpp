#include <iostream>
using namespace std;

// time complexity: theta(n)
int power(int x, int n)
{
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= x;
    }
    return ans;
}

int main()
{
    int x, n;
    cin >> x >> n;

    cout << power(x, n);
}