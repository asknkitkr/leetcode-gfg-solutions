class Solution {
    public int search(int[] nums, int target) {
        int n = nums.length;
        int start = 0, end = n - 1, mid = 0;

        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] > nums[(mid + 1) % n]) {
                break;
            } else if (nums[mid] < nums[start]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        start = mid + 1;
        end = n - 1;
        if (nums[0] <= target) {
            start = 0;
            end = mid;
        }
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
}