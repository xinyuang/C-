<<<<<<< HEAD
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int se = 0;
        int sh = INT_MIN;
        for (int price : prices) {
            se = max(se, sh + price);
            sh = max(sh, - price);
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
            int i = 0;
            int profit = 0;
            while(i < prices.size()) {
                if (prices[i] < valley) {
                    valley = prices[i];
                }
                profit = prices[i] - valley;
                if (maxprofit < profit) {
                    maxprofit = profit;
                }
                i++;
            }
        }
        return maxprofit;
    }
=======
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int se = 0;
        int sh = INT_MIN;
        for (int price : prices) {
            se = max(se, sh + price);
            sh = max(sh, - price);
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
            int i = 0;
            int profit = 0;
            while(i < prices.size()) {
                if (prices[i] < valley) {
                    valley = prices[i];
                }
                profit = prices[i] - valley;
                if (maxprofit < profit) {
                    maxprofit = profit;
                }
                i++;
            }
        }
        return maxprofit;
    }
>>>>>>> 904c0daf6776a91c1087079e8582f026fb3b8022
};