<<<<<<< HEAD
<<<<<<< HEAD
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int se = 0, sh = INT_MIN, se_old = 0, se_pre = 0;
        for (int price : prices) {
            se_old = se;
            se = max(se, sh + price);
            sh = max(sh, se_pre - price);
            se_pre = se_old;
        }
        return se;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        vector<int> se(n), sh(n), sc(n);
        se[0] = 0;
        sh[0] = -prices[0];
        sc[0] = INT_MIN;
        for (int i = 1; i < n; i++) {
            se[i] = max(se[i - 1], sc[i - 1]);
            sh[i] = max(sh[i - 1], se[i - 1] - prices[i]);
            sc[i] = sh[i - 1] + prices[i];
        }
        return max(sc[n - 1], se[n - 1]);
    }
=======
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int se = 0, sh = INT_MIN, se_old = 0, se_pre = 0;
        for (int price : prices) {
            se_old = se;
            se = max(se, sh + price);
            sh = max(sh, se_pre - price);
            se_pre = se_old;
        }
        return se;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        vector<int> se(n), sh(n), sc(n);
        se[0] = 0;
        sh[0] = -prices[0];
        sc[0] = INT_MIN;
        for (int i = 1; i < n; i++) {
            se[i] = max(se[i - 1], sc[i - 1]);
            sh[i] = max(sh[i - 1], se[i - 1] - prices[i]);
            sc[i] = sh[i - 1] + prices[i];
        }
        return max(sc[n - 1], se[n - 1]);
    }
>>>>>>> 904c0daf6776a91c1087079e8582f026fb3b8022
=======
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int se = 0, sh = INT_MIN, se_old = 0, se_pre = 0;
        for (int price : prices) {
            se_old = se;
            se = max(se, sh + price);
            sh = max(sh, se_pre - price);
            se_pre = se_old;
        }
        return se;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        vector<int> se(n), sh(n), sc(n);
        se[0] = 0;
        sh[0] = -prices[0];
        sc[0] = INT_MIN;
        for (int i = 1; i < n; i++) {
            se[i] = max(se[i - 1], sc[i - 1]);
            sh[i] = max(sh[i - 1], se[i - 1] - prices[i]);
            sc[i] = sh[i - 1] + prices[i];
        }
        return max(sc[n - 1], se[n - 1]);
    }
>>>>>>> 904c0daf6776a91c1087079e8582f026fb3b8022
};