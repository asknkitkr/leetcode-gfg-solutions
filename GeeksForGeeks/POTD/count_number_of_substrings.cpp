/*QUESTION
 * Given a string of lowercase alphabets, count all possible substrings
 * (not necessarily distinct) that have exactly k distinct characters.
 */

class Solution
{
public:
    long long int helper(string s, int k)
    {
        int n = s.length();
        long long int ans = 0, left = 0;
        int count[26] = {0};
        int distinct = 0;

        for (int i = 0; i < n; i++)
        {
            if (count[s[i] - 'a'] == 0)
                distinct++;
            count[s[i] - 'a']++;
            while (distinct > k)
            {
                count[s[left] - 'a']--;
                if (count[s[left] - 'a'] == 0)
                    distinct--;
                left++;
            }
            ans += i - left + 1;
        }
        return ans;
    }
    long long int substrCount(string s, int k)
    {
        return helper(s, k) - helper(s, k - 1);
    }
};