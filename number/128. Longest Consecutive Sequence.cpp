class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        if (nums.size() == 0 || nums.empty()) return res;
        unordered_set<int> hash(nums.begin(), nums.end());       
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(nums[i]) == hash.end()) continue;
            auto itr = hash.find(nums[i]);
            int pre = *itr - 1;
            int next = *itr + 1;
            while (hash.find(pre) != hash.end()) {
                hash.erase(pre);
                --pre;
            }
            while (hash.find(next) != hash.end()) {
                hash.erase(next);
                ++next;
            }
            res = max(res, next - pre - 1);
        }
        return res;
    }
};