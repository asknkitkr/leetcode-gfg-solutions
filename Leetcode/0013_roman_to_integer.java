class Solution {
    public int romanToInt(String s) {
        int result = 0;
        int prev = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            int curr;
            switch (s.charAt(i)) {
                case 'I':
                    curr = 1;
                    break;
                case 'V':
                    curr = 5;
                    break;
                case 'X':
                    curr = 10;
                    break;
                case 'L':
                    curr = 50;
                    break;
                case 'C':
                    curr = 100;
                    break;
                case 'D':
                    curr = 500;
                    break;
                case 'M':
                    curr = 1000;
                    break;
                default:
                    throw new IllegalArgumentException("Invalid Roman numeral character: " + s.charAt(i));
            }

            if (curr < prev) {
                result -= curr;
            } else {
                result += curr;
                prev = curr;
            }
        }

        return result;
    }
}