class Solution {
vector<vector<int>> res;
vector<int>combination;
int target2;
int left,right;
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) return res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; i++) {
            if (i != 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < nums.size() - 2; j++) {
                if (j != i + 1 && nums[j] == nums[j - 1]) continue;
                target2 = target - nums[i] - nums[j];
                left = j + 1;
                right = nums.size() - 1;
                while (left < right) {
                    if (nums[left] + nums[right] > target2 ||right < nums.size() - 1 && nums[right] == nums[right + 1]) right--;
                    else if (nums[left] + nums[right] < target2 ||  left > j + 2 && nums[left] == nums[left - 1]) left++;
                    else {
                        combination.assign({nums[i], nums[j], nums[left], nums[right]});
                        res.push_back(combination);
                        left++;
                        right--;
                    }
                }
            }
        }
        return res;
    }
};