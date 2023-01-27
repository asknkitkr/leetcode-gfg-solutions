class Solution {
    public int lengthOfLongestSubstring(String s) {
        int size = s.length();
        int[] freq = new int[256];
        Arrays.fill(freq, -1);
        int left = 0, right = 0, maxLen = 0;

        while (right < size) {
            if (freq[s.charAt(right)] != -1) {
                left = Math.max(freq[s.charAt(right)] + 1, left);
            }
            freq[s.charAt(right)] = right;
            maxLen = Math.max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
}