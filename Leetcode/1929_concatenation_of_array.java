class Solution {
    public int[] getConcatenation(int[] nums) {
        int n = nums.length;
        int ANS[] = new int[2 * n];

        for (int i = 0; i < n; i++) {
            ANS[i] = nums[i];
            ANS[i + n] = nums[i];
        }
        return ANS;
    }
}