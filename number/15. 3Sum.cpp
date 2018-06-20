class Solution {
vector<vector<int>> res;
int target;
int left, right;
vector<int> combination;
public:
    vector<vector<int>> threeSum(vector<int>& nums) { 
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() && nums[i] <= 0; i++) {
            if (i != 0 && nums[i] == nums[i - 1]) continue;
            target = -nums[i];
            left = i + 1;
            right = nums.size() - 1;
            while (left < right) {
                if (nums[left] + nums[right] < target || (left > i + 2) && nums[left] == nums[left - 1]) left++;
                else if (nums[left] + nums[right] > target || (right < nums.size() - 1) && nums[right] == nums[right + 1]) right--;
                else if (nums[left] + nums[right] == target) {
                    combination.assign({nums[i], nums[left], nums[right]});
                    res.push_back(combination);
                    left++;
                    right--;
                }
            }
        }
        return res;
    }
};