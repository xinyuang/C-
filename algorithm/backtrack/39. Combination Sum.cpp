class Solution {
vector<vector<int>> res;

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> combination;
        search(candidates, 0, target, combination);     
        return res;
    }
    void search(vector<int>& candidates, int start, int target, vector<int> combination) {
        if (target == 0) {
            res.push_back(combination);
            return;
        }
        for (int i = start; i < candidates.size() && candidates[i] <= target; i++) {
            combination.push_back(candidates[i]);
            search(candidates, i, target - candidates[i], combination);
            combination.pop_back();
        }
    }
};