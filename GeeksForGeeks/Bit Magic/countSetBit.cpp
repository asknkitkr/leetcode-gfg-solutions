#include <iostream>
using namespace std;

// naive solution
int countSetBits1(int n)
{
    int count = 0;

    while (n != 0)
    {
        if (n % 2 != 0)
            count++;
        n /= 2;
    }

    return count;
}

// naive solution
int countSetBits2(int n)
{
    int count = 0;

    while (n != 0)
    {
        count += (n & 1);
        n /= 2;
    }

    return count;
}

// Above two functions have the Time Complexity of Theta(Total bits in n)

// Standard Algorithm
// Brian Kerningam's Algorithm
// Time Complexity: Theta(Set bit count)
int countSetBits3(int n)
{
    int count = 0;

    while (n != 0)
    {
        n = (n & (n - 1));
        count++;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << countSetBits1(n) << endl;
    cout << countSetBits2(n) << endl;
    cout << countSetBits3(n) << endl;
}