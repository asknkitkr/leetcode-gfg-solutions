class Solution
{
public:
    int buyMaximumProducts(int n, int k, int price[])
    {
        vector<pair<int, int>> stocks;
        for (int i = 0; i < n; i++)
        {
            stocks.push_back({price[i], i + 1});
        }
        sort(stocks.begin(), stocks.end());

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int s = min(stocks[i].second, k / stocks[i].first);
            k -= s * stocks[i].first;
            ans += s;
        }
        return ans;
    }
};