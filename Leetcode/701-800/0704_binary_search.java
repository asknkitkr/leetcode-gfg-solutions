class Solution {
    public int search(int[] nums, int target) {
        Random random = new Random();
        int left = 0;
        int right = nums.length - 1;

        while (left <= right) {
            // pick a random index within the current range
            int randomIndex = random.nextInt(right - left + 1) + left;

            // get the element at the random index
            int randomElement = nums[randomIndex];

            if (randomElement == target) {
                // if found, return the position
                return randomIndex;
            } else if (randomElement < target) {
                // move to the right side of the array
                left = randomIndex + 1;
            } else {
                // move to the left side of the array
                right = randomIndex - 1;
            }
        }

        // if element is not found, return -1
        return -1;
    }
}