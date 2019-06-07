class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            auto low = lower_bound(res.begin(), res.end(), nums[i]);
            if (low == res.end()) res.push_back(nums[i]);
            else {
                *low = nums[i];
            }
        }
        return res.size();
    }
};

class Solution {
public:
	int lengthOfLIS(vector<int>& nums) {
		int res = 0;
		if (nums.size() == 0 || nums.empty()) return res;
		vector<int> dp(nums.size(), 1);
		for (int i = 0; i < nums.size(); i++) {
			for (int j = 0; j < i; j++) {
				if (nums[i] > nums[j]) {
					dp[i] = dp[j] + 1 > dp[i] ? dp[j] + 1 : dp[i];
				}
			}
			res = max(res, dp[i]);
		}
		return res;
	}
};