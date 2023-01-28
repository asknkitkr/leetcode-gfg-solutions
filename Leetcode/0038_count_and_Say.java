class Solution {
    public String countAndSay(int n) {
        if (n == 1)
            return "1";

        String s = countAndSay(n - 1);

        StringBuilder stringBuilder = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            int count = 1;
            while (i + 1 < s.length() && s.charAt(i) == s.charAt(i + 1)) {
                count++;
                i++;
            }
            stringBuilder.append(count);
            stringBuilder.append(s.charAt(i));
        }

        return stringBuilder.toString();
    }
}