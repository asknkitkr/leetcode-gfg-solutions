#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// another method to determine the prime number by
// counting the number of divisors
// if prime factor is 2 then it is prime number
// else it is not a prime number.
bool isPrime(int n)
{
    if (n == 1)
        return false;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    return count == 2 ? true : false;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    return 0;
}