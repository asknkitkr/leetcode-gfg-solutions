class Solution
{
public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k)
    {
        int count = 0;
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        for (auto &i : mp)
        {
            if (i.second > n / k)
                count++;
        }

        return count;
    }
};