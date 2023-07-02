class Solution {
    public boolean canJump(int[] nums) {
        int n = nums.length;
        int ans = 0;

        for (int i = 0; ans < n && ans <= i; ans++) {
            i = Integer.max(ans + nums[ans], i);
        }

        return ans == n;
    }
}