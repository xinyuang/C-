class Solution {
vector<vector<int>> res;

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if (nums.empty() || nums.size() == 0) return res;
        sort(nums.begin(), nums.end());
        search(nums, 0);
        return res;
    }
    void search(vector<int> nums, int start) {
        if (start == nums.size() - 1) {
            res.push_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); i++) {
            if (i != start && nums[i] == nums[start]) continue;
            swap(nums[start], nums[i]);
            search(nums, start + 1);
        }
    }

};  