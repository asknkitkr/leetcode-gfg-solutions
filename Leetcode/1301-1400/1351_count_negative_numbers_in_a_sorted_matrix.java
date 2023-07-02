// class Solution {
//     public int countNegatives(int[][] grid) {
//         int count = 0;
//         for(int i = 0; i < grid.length; i++) {
//             for(int j = 0; j < grid[i].length; j++) {
//                 if(grid[i][j] < 0) {
//                     count++;
//                 }
//             }        
//         }
//         return count;    
//     }
// }

class Solution {
    public int countNegatives(int[][] grid) {
        int count = 0;
        int rows = grid.length;
        int cols = grid[0].length;

        for (int i = 0; i < rows; i++) {
            int left = 0;
            int right = cols - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (grid[i][mid] < 0) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            count += cols - left;
        }

        return count;
    }
}
