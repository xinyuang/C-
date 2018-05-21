class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if (prices.empty() || k == 0) return 0;
        if(k >= prices.size()/2) {
            int se = 0, sh = INT_MIN;
            for (int price : prices) {
                se = max(se, sh + price);
                sh = max(sh, se - price);
            }
            return se;
        }
        else {
            vector<int> se_v(k + 1, 0);
            vector<int> sh_v(k + 1, INT_MIN);
            for (int price : prices) {
                for(int i = k; i > 0; i--) {
                    
                    se_v[i] = max(se_v[i], sh_v[i] + price);
                    sh_v[i] = max(sh_v[i], se_v[i - 1] - price);
                }
            }
        return se_v[k];
        }
    }
};