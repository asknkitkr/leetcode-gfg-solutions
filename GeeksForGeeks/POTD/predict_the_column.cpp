class Solution
{
public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>> arr, int N)
    {
        int max = 0, ans = -1;
        for (int i = 0; i < N; i++)
        {
            int count = 0;
            for (int j = 0; j < N; j++)
            {
                if (arr[j][i] == 0)
                {
                    count++;
                }
            }

            if (count > max)
            {
                max = count;
                ans = i;
            }
        }
        return ans;
    }
};