class Solution {
    public int boxDelivering(int[][] boxes, int portsCount, int maxBoxes, int maxWeight) {
        int n = boxes.length;
        int[] dp = new int[n + 1];
        int trips = 2;
        int weight = 0;
        for (int l = 0, r = 0; r < n; ++r) {
            weight += boxes[r][1];

            if (r > 0 && boxes[r][0] != boxes[r - 1][0]) {
                trips++;
            }

            while (r - l + 1 > maxBoxes || weight > maxWeight || (l < r && dp[l + 1] == dp[l])) {
                weight -= boxes[l][1];
                if (boxes[l][0] != boxes[l + 1][0])
                    --trips;
                ++l;
            }
            dp[r + 1] = dp[l] + trips;
        }
        return dp[n];
    }
}