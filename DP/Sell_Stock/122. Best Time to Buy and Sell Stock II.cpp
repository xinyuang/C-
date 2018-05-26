class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int se = 0, sh = INT_MIN;
        for(int price : prices) {
            se = max(se, sh + price);
            sh = max(sh, se - price);
        }
        return se;
    }
};


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        if (!prices.empty()) {
            int valley = prices[0];
            int peak = prices[0];
            int n = prices.size();
            int i = 0;
            while (i < n - 1) {
                while (i < n - 1 && prices[i] >= prices[i + 1]) i++;
                valley = prices[i];
                while (i < n - 1 && prices[i] <= prices[i + 1]) i++;
                peak = prices[i];
                maxprofit += peak - valley;
                }
            }
        return maxprofit;
        }

};


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        if (!prices.empty()) {
            for(int i = 0; i < prices.size() - 1; i++) {
                if(prices[i + 1] > prices[i]) maxprofit += prices[i + 1] - prices[i];
            } 
        }

        return maxprofit;
    }
};