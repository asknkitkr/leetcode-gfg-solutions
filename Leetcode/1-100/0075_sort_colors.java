class Solution {
    public void sortColors(int[] nums) {
        int c[] = new int[3];
        for(int i: nums) c[i]++;
        int p = 0;
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < c[i]; j++)
                nums[p++] = i;
    }
}