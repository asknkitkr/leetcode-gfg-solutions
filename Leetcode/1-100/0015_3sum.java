class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        int n = nums.length;

        Arrays.sort(nums);
        for (int i = 0; i < n; i++) {
            if (i > 0 && (nums[i] == nums[i - 1])) {
                continue;
            }
            int x = nums[i];
            int left = i + 1, right = n - 1;

            while (left < right) {
                if (x + nums[left] + nums[right] == 0) {
                    List<Integer> temp = new ArrayList<>();
                    temp.add(x);
                    temp.add(nums[left]);
                    temp.add(nums[right]);
                    ans.add(temp);

                    left++;
                    while ((nums[left - 1] == nums[left]) && (left < right)) {
                        left++;
                    }
                }
                if (x + nums[left] + nums[right] > 0) {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return ans;
    }
}