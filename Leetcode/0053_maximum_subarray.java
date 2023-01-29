class Solution {
    public int maxSubArray(int[] nums) {
        int n = nums.length;

        int max_sum = Integer.MIN_VALUE, sum = 0;
        for (int x : nums) {
            sum += x;
            max_sum = Math.max(max_sum, sum);

            if (sum < 0)
                sum = 0;
        }
        return max_sum;
    }
}