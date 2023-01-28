class Solution {
    private void helper(int[] candidates, int target, int index, List<Integer> combination, int sum,
            List<List<Integer>> combinations) {
        if (sum == target) {
            combinations.add(new ArrayList<>(combination));
            return;
        }
        if (sum > target || index >= candidates.length) {
            return;
        }
        for (int i = index; i < candidates.length; i++) {
            combination.add(candidates[i]);
            sum += candidates[i];
            helper(candidates, target, i, combination, sum, combinations);
            combination.remove(combination.size() - 1);
            sum -= candidates[i];
        }
    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> comb = new ArrayList<>();
        helper(candidates, target, 0, new ArrayList<>(), 0, comb);
        return comb;
    }
}