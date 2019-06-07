class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size(); 
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for (int i = 0; i < n; i++) {
            for (string word : wordDict) {
                if (i >= word.length() - 1) {
                   if (dp[i - word.length() + 1] == true && !s.compare(i - word.length() + 1, word.length(),word)) {
                       dp[i + 1] = true; 
                       break;
                    }
                }
            }
        }
        return dp[n];
    }
};