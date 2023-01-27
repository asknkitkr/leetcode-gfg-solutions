// Time complexity: O(n)
// Auxiiliary Space: O(n)

#include <iostream>
using namespace std;

int factorial(int n)
{
    long long int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n; // n will be in the range upto 31
    cout << factorial(n) << endl;
    return 0;
}