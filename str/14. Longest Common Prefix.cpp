class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0 || strs.empty()) return "";
        string common = strs[0];
        string new_prefix;
        for (int i = 1; i < strs.size(); i++) {
            new_prefix.clear();
            for (int j = 0; j < common.length(); j++) {
                if (common[j] == strs[i][j]) new_prefix.push_back(common[j]);
                else break;
            }
            common = new_prefix;
        }
        return common;
    }
};