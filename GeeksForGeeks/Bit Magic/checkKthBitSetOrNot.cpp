#include <iostream>
using namespace std;

// using Left shift
string kthBit(int n, int k)
{
    return (n & (1 << (k - 1)) != 0) ? "YES" : "NO";
}

// using Right shift
string KthBit(int n, int k)
{
    return (((n >> (k - 1)) & 1) == 1) ? "YES" : "NO";
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << kthBit(n, k);
}