class Solution {
    public String longestCommonPrefix(String[] strs) {
        String s = strs[0];
        for (String a : strs) {
            while (!a.startsWith(s)) {
                s = s.substring(0, s.length() - 1);
            }
        }
        return s;
    }
}