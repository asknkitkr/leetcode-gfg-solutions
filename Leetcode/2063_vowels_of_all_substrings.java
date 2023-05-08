class Solution {
    public long countVowels(String word) {
        long cnt = 0, cur = 0;
        for (int i = 0; i < word.length(); i++) {
            char c = word.charAt(i);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                cur += (i + 1);
            }
            cnt += cur;
        }
        return cnt;
    }

}