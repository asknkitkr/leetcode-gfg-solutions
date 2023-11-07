#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int>> &matrix, int n)
    {
        vector<int> ans;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                sum += matrix[i][j];
            }
        }
        ans.push_back(sum);
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                sum += matrix[i][j];
            }
        }
        ans.push_back(sum);
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mat(n);
    for (int i = 0; i < n; i++)
    {
        mat[i].assign(n, 0);
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    Solution s;
    vector<int> r = s.sumTriangles(mat, n);
    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
    cout << endl;

    return 0;
}