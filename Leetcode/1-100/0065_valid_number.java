import java.util.regex.Pattern;

class Solution {
    public boolean isNumber(String s) {
        // Regex for a valid number
        String regex = "^[+-]?((\\d*\\.\\d+)|(\\d+\\.?))([Ee][+-]?\\d+)?$";

        // Compile the regex and use it to check if the string is a valid number
        Pattern pattern = Pattern.compile(regex);
        return pattern.matcher(s).matches();
    }
}