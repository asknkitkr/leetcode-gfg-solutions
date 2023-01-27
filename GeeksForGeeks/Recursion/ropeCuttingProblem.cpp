#include <iostream>
#include <algorithm>
using namespace std;

int max(int a, int b, int c)
{
    int m = a;
    if (m < b)
        return b;
    if (m < c)
        return c;
    return m;
}

// Function to solve the rope cutting problem
int solve(int n, int a, int b, int c)
{
    // base case: if the rope is of length 0, return 0
    if (n == 0)
        return 0;
    // if the rope is of negative length, return -1
    if (n < 0)
        return -1;
    // recursively call the function for each possible cut
    int res = max(solve(n - a, a, b, c), solve(n - b, a, b, c), solve(n - c, a, b, c));
    // if the function returns -1, return -1
    if (res == -1)
        return -1;
    // otherwise, return the result plus 1
    return res + 1;
}

int main()
{
    cout << solve(23, 12, 14, 11) << endl; // should return 2
    cout << solve(5, 2, 3, 1) << endl;     // should return 3
    cout << solve(9, 2, 2, 2) << endl;     // should return 4
}
