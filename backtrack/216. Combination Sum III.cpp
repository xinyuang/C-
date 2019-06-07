class Solution {
vector<vector<int>> res;
vector<int> combination;
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        if (n == NULL || n == 0) return res;
        search(k, n, 1);
        return res;
    }
    void search(int k, int target, int start) {
        if (combination.size() == k && target == 0) {
            res.push_back(combination);
            return;
        } 
        if (combination.size() == k) return;
        int n = k - combination.size();
        for (int i = start; i < 10 && target >= i * n + (n - 1) * n / 2; i++) {
            combination.push_back(i);
            search(k, target - i, i + 1);
            combination.pop_back();
        }
    }
};