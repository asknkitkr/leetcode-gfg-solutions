class Solution {
    public int countStudents(int[] students, int[] sandwiches) {
        int[] count = new int[2];
        int n = students.length, k;
        for (int a : students)
            count[a]++;
        for (k = 0; k < n && count[sandwiches[k]] > 0; ++k)
            count[sandwiches[k]]--;
        return n - k;
    }
}