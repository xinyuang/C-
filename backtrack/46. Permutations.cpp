class Solution {
vector<vector<int>> res;
vector<int> comb;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() == 0 || nums.empty()) return res;
        vector<bool> flag(nums.size(), false);
        sort(nums.begin(), nums.end());
        search(nums, flag);
        return res;
    }
    void search(vector<int>& nums, vector<bool> flag) {
        if (comb.size() == nums.size()) {
            res.push_back(comb);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (flag[i] == true) continue;
            flag[i] = true;
            comb.push_back(nums[i]);
            search(nums, flag);
            flag[i] = false;
            comb.pop_back();
        }
    }
};