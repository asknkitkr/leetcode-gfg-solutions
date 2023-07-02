class Solution {
    public int bestTeamScore(int[] scores, int[] ages) {
        int n = scores.length;
        int[][] players = new int[n][2];

        for (int i = 0; i < n; i++) {
            players[i][0] = ages[i];
            players[i][1] = scores[i];
        }

        Arrays.sort(players, (a, b) -> a[0] == b[0] ? a[1] - b[1] : a[0] - b[0]);

        int[] dp = new int[n];
        int res = 0;

        for (int i = 0; i < n; i++) {
            dp[i] = players[i][1];
            for (int j = 0; j < i; j++) {
                if (players[j][1] <= players[i][1]) {
                    dp[i] = Math.max(dp[i], dp[j] + players[i][1]);
                }
            }
            res = Math.max(res, dp[i]);
        }
        return res;
    }
}