class Solution
{
public:
    int countX(int L, int R, int X)
    {
        int count = 0, n = 0;
        for (int i = L + 1; i < R; i++)
        {
            n = i;
            while (n != 0)
            {
                int r = n % 10;
                if (r == X)
                    count++;
                n /= 10;
            }
        }
        return count;
    }
};