class Solution {
    public boolean isMatch(String s, String p) {
        int N = s.length();
        int M = p.length();
        boolean dp[][] = new boolean[N + 1][M + 1];
        for (int n = 0; n <= N; n++) {
            for (int m = 0; m <= M; m++) {
                if (m == 0 && n == 0)
                    dp[n][m] = true;
                else if (m == 0)
                    dp[n][m] = false;
                else if (n == 0) {
                    if (p.charAt(m - 1) == '*')
                        dp[n][m] = dp[n][m - 1];
                    else
                        dp[n][m] = false;
                } else if (p.charAt(m - 1) == '*')
                    dp[n][m] = dp[n - 1][m - 1] | dp[n][m - 1] | dp[n - 1][m];
                else if (p.charAt(m - 1) == '?')
                    dp[n][m] = dp[n - 1][m - 1];
                else if (s.charAt(n - 1) != p.charAt(m - 1))
                    dp[n][m] = false;
                else
                    dp[n][m] = dp[n - 1][m - 1];
            }
        }
        return dp[N][M];
    }
}