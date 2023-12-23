class Solution
{
public:
    bool isPrime(int N)
    {
        if (N == 1)
            return false;
        for (int i = 2; i <= sqrt(N); i++)
        {
            if (N % i == 0)
                return false;
        }
        return true;
    }

    int minNumber(int arr[], int N)
    {
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += arr[i];
        }

        int i = 0;
        while (true)
        {
            if (isPrime(sum + i))
                return i;
            i++;
        }
    }
};