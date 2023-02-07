// time complexity: O(N)

#include <iostream>
using namespace std;

bool checkString(string &s, int start, int end)
{
    if (start >= end)
        return true;
    return (s[start] == s[end]) && checkString(s, start + 1, end - 1);
}

int main()
{
    string s1 = "abba";
    string s2 = "addf";

    cout << checkString(s1, 0, s1.size() - 1) << endl;
    cout << checkString(s2, 0, s2.size() - 1) << endl;
}
