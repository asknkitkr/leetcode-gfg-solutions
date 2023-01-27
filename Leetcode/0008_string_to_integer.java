class Solution {
    public int myAtoi(String s) {
        // Check for empty string
        if (s == null || s.length() == 0) {
            return 0;
        }

        // Trim leading whitespace
        s = s.trim();

        // Check for an empty string after trimming whitespace
        if (s.length() == 0) {
            return 0;
        }

        // Initialize variables for parsing the string
        int i = 0;
        int sign = 1;
        int result = 0;

        // Check for a sign character
        if (s.charAt(0) == '+' || s.charAt(0) == '-') {
            if (s.charAt(0) == '-') {
                sign = -1;
            }
            i++;
        }

        // Parse the string
        while (i < s.length()) {
            // Get the current character
            char c = s.charAt(i);

            // Check if the current character is a digit
            if (c < '0' || c > '9') {
                break;
            }

            // Check for integer overflow
            if (result > Integer.MAX_VALUE / 10 || (result == Integer.MAX_VALUE / 10 && c > '7')) {
                return (sign == 1) ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }

            // Add the current digit to the result
            result = result * 10 + (c - '0');
            i++;
        }

        return sign * result;
    }
}