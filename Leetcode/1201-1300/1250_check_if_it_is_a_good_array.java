class Solution {
    public boolean isGoodArray(int[] nums) {
        if (nums.length == 0) {
            return false;
        }

        int gcd = nums[0]; // Initialize gcd as the first element

        // Calculate the GCD of all elements in the array
        for (int i = 1; i < nums.length; i++) {
            gcd = calculateGCD(gcd, nums[i]);

            // If gcd becomes 1, return true
            if (gcd == 1) {
                return true;
            }
        }

        // If gcd is 1, the array is good
        return gcd == 1;
    }

    // Helper method to calculate the GCD of two numbers using Euclidean algorithm
    private int calculateGCD(int a, int b) {
        if (b == 0) {
            return a;
        }

        return calculateGCD(b, a % b);
    }
}
