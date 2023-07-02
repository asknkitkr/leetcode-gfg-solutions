class Solution {
    public int[][] generateMatrix(int n) {
        int[][] matrix = new int[n][n];
        int num = 1;
        int rowStart = 0, rowEnd = n - 1, colStart = 0, colEnd = n - 1;
        
        while (rowStart <= rowEnd && colStart <= colEnd) {
            // Traverse right
            for (int j = colStart; j <= colEnd; j++) {
                matrix[rowStart][j] = num++;
            }
            rowStart++;
            
            // Traverse down
            for (int i = rowStart; i <= rowEnd; i++) {
                matrix[i][colEnd] = num++;
            }
            colEnd--;
            
            // Traverse left
            if (rowStart <= rowEnd) {
                for (int j = colEnd; j >= colStart; j--) {
                    matrix[rowEnd][j] = num++;
                }
                rowEnd--;
            }
            
            // Traverse up
            if (colStart <= colEnd) {
                for (int i = rowEnd; i >= rowStart; i--) {
                    matrix[i][colStart] = num++;
                }
                colStart++;
            }
        }
        
        return matrix;
    }
}