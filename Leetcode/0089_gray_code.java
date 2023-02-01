class Solution {
    public List<Integer> grayCode(int n) {
        List<Integer> arr = new ArrayList<>();
        arr.add(0);
        int e = -1;

        for (int i = 1; i < (int) Math.pow(2, n); i++) {
            if (i == (int) Math.pow(2, e + 1)) {
                e += 1;
            }
            int index = (int) Math.pow(2, e + 1) - i - 1;
            int num = (int) Math.pow(2, e) + arr.get(index);
            arr.add(num);
        }

        return arr;
    }
}