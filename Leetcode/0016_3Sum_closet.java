class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        long closest = Integer.MAX_VALUE;
        for (int i = 0; i < nums.length - 2; i++) {
            int p1 = i + 1;
            int p2 = nums.length - 1;
            while (p1 < p2) {
                int sum = nums[i] + nums[p1] + nums[p2];
                if (Math.abs(target - sum) < Math.abs(target - closest))
                    closest = sum;

                if (sum > target)
                    p2--;
                else
                    p1++;
            }
        }
        return (int) closest;
    }
}