#include <iostream>
using namespace std;

void printDivisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i * i != n)
            {
                cout << n / i << " ";
            }
        }
    }
}

void printDivisorsSorted(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    printDivisors(n);
    cout << endl;
    printDivisorsSorted(n);
    return 0;
}