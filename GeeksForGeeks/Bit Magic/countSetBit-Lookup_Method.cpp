#include <iostream>
#include <bitset>
using namespace std;

#define B2(n) n, n + 1, n + 1, n + 2
#define B4(n) B2(n), B2(n + 1), B2(n + 1), B2(n + 2)
#define B6(n) B4(n), B4(n + 1), B4(n + 1), B4(n + 2)
#define COUNT_BITS B6(0), B6(1), B6(1), B6(2)

unsigned int lookup[256] = {COUNT_BITS};

int countSetBits(int n)
{
    return (lookup[n & 0xff] + lookup[(n >> 8) & 0xff] + lookup[(n >> 16) & 0xff] + lookup[(n >> 24) & 0xff]);
}

int main()
{
    int n;
    cin >> n;

    cout << "Binary: " << bitset<32>(n) << endl;
    cout << countSetBits(n);

    return 0;
}
