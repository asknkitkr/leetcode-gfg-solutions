// Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
// I 1
// V 5
// X 10
// L 50
// C 100
// D 500
// M 1000

class Solution
{
public:
    int romanToDecimal(string &str)
    {
        unordered_map<char, int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int len = str.length();
        int n = mp[str[len - 1]];
        for (int i = len - 2; i >= 0; i--)
        {
            int curr = mp[str[i]];
            int prev = mp[str[i + 1]];

            if (curr < prev)
                n -= curr;
            else
                n += curr;
        }
        return n;
    }
};