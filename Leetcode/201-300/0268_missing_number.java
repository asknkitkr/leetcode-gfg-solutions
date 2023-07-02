class Solution {
    public int missingNumber(int[] nums) {
        // naive solution
        int n = nums.length;
        int ans = 0;

        ans = n * (n + 1) / 2;

        for (int i = 0; i < n; i++) {
            ans -= nums[i];
        }
        return ans;
    }
}