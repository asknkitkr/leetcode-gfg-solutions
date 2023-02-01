class Solution {
    static boolean visited[][];

    public boolean exist(char[][] board, String word) {
        int n = board.length;
        int m = board[0].length;
        visited = new boolean[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (word.charAt(0) == board[i][j] && search(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }

    private boolean search(char[][] board, String word, int i, int j, int idx) {
        if (idx == word.length()) {
            return true;
        }
        if (i >= board.length || i < 0 || j >= board[0].length || j < 0 || board[i][j] != word.charAt(idx)
                || visited[i][j])
            return false;

        visited[i][j] = true;

        if (search(board, word, i + 1, j, idx + 1) || search(board, word, i - 1, j, idx + 1)
                || search(board, word, i, j + 1, idx + 1) || search(board, word, i, j - 1, idx + 1)) {
            return true;
        }
        visited[i][j] = false;
        return false;
    }
}