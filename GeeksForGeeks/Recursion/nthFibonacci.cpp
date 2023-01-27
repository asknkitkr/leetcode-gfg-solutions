#include <iostream>
using namespace std;

int nthfibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return nthfibonacci(n - 1) + nthfibonacci(n - 2);
}

int main()
{
    int n = 1;
    cout << nthfibonacci(n) << endl;

    return 0;
}