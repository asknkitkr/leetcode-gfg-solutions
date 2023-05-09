class Solution {
    public int[] searchRange(int[] nums, int target) {
        int n = nums.length;
        int low, high, l;

        int[] result = new int[] { -1, -1 };

        int[] temp = new int[n + 1];
        for (int i = 0; i < n; i++) {
            temp[i] = nums[i];
        }
        temp[n] = Integer.MAX_VALUE;

        low = 0;
        high = n;
        while (low < high) {
            int mid = (low + high) / 2;
            if (temp[mid] >= target)
                high = mid;
            else
                low = mid + 1;
        }
        if (temp[low] != target)
            return result;
        l = low;

        low = 0;
        high = n;
        while (low < high) {
            int mid = (low + high) / 2;
            if (target >= temp[mid])
                low = mid + 1;
            else
                high = mid;
        }

        result[0] = l;
        result[1] = low - 1;
        return result;
    }
}