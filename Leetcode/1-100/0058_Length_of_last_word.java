class Solution {
    public int lengthOfLastWord(String s) {
        int len = s.length();
        int lastWordLen = 0;
        for (int i = len - 1; i >= 0; i--) {
            if (s.charAt(i) == ' ') {
                if (lastWordLen > 0) {
                    break;
                }
            } else {
                lastWordLen++;
            }
        }
        return lastWordLen;
    }
}