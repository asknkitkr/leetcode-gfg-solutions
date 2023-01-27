// Time Complexity: Theta(n)

#include <iostream>
using namespace std;

// using naive method
int countZeroes(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }

    int count = 0;
    while (fact % 10 == 0)
    {
        count++;
        fact /= 10;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << countZeroes(n) << endl;
    return 0;
}