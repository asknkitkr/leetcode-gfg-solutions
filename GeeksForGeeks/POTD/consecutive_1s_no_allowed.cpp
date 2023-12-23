class Solution
{
public:
    // #define ll long long
    ll countStrings(int n)
    {
        int MOD = (int)1e9 + 7;

        if (n == 2)
            return 3;
        ll first = 1, second = 1;
        ll ans = (first + second) % MOD;

        for (int i = 2; i <= n; i++)
        {
            second = first;
            first = ans;
            ans = (first + second) % MOD;
        }
        return ans;
    }
};