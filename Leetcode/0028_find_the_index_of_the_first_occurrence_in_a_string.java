class Solution {
    public int strStr(String haystack, String needle) {
        for (int front = 0, end = needle.length() - 1; end < haystack.length(); front++, end++) {
            if (haystack.substring(front, end + 1).equals(needle)) {
                return front;
            }
        }
        return -1;
    }
}