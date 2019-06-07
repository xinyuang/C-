class Solution {
vector<vector<int>> res;
vector<int> combination;
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        if (candidates.empty() || candidates.size() == 0) return res;        
        sort(candidates.begin(), candidates.end());
        search(candidates, 0, target);
        return res;
    }
    void search(vector<int>& candidates, int start, int target) {
        if (target == 0) {
            res.push_back(combination);
            return;
        }
        for (int i = start; i < candidates.size() && candidates[i] <= target; i++) {
            if (i == start || candidates[i] != candidates[i - 1]) {
                combination.push_back(candidates[i]);
                search(candidates, i + 1, target - candidates[i]);
                combination.pop_back();
            } 
        }
    }

};