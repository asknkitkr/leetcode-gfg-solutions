// Time complexity: O(d) where d is the number of digits in the number.

#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int temp = n;
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return temp == rev;
}

int main()
{
    int n;
    cin >> n;
    if (isPalindrome(n))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}