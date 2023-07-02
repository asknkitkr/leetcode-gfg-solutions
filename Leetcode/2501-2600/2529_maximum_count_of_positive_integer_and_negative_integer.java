class Solution {
    public int maximumCount(int[] nums) {
        int countPos = 0;
        int countNeg = 0;

        // for(int i = 0; i < nums.length; i++) {
        // if(nums[i] < 0) countNeg++;
        // if(nums[i] > 0) countPos++;
        // }

        // return Math.max(countNeg, countPos);
        if (nums[0] > 0 || nums[nums.length - 1] < 0)
            return nums.length;
        int start = 0, end = nums.length - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] < 0) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }

        return Math.max(countNeg, countPos);
    }
}