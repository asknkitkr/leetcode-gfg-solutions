class Solution {
    public int longestValidParentheses(String s) {
        int maxLength = 0;
        int[] dp = new int[s.length()];

        if (s == "")
            return 0;

        Stack<Integer> st = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                st.push(i);
            } else {
                if (!st.isEmpty()) {
                    int start = st.pop();
                    dp[i] = i - start + 1;
                    if (start > 0) {
                        dp[i] += dp[start - 1];
                    }
                    maxLength = Math.max(maxLength, dp[i]);
                }
            }
        }
        return maxLength;
    }
}