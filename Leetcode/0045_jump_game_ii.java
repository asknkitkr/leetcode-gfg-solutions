class Solution {
    public int jump(int[] nums) {
        int n = nums.length;
        int jumps[] = new int[n];
        int min;
        jumps[n - 1] = 0;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] == 0)
                jumps[i] = Integer.MAX_VALUE;
            else if (nums[i] >= n - i - 1)
                jumps[i] = 1;
            else {
                min = Integer.MAX_VALUE;
                for (int j = i + 1; j < n && j <= nums[i] + i; j++) {
                    if (min > jumps[j])
                        min = jumps[j];
                }
                if (min != Integer.MAX_VALUE)
                    jumps[i] = min + 1;
                else
                    jumps[i] = min;
            }
        }
        return jumps[0];
    }
}