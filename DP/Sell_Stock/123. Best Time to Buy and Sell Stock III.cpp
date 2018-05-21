class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int se1 = 0, se2 = 0, sh1 = INT_MIN, sh2 = INT_MIN;
        for(int price : prices) {
            se2 = max(se2, sh2 + price);
            sh2 = max(sh2, se1 - price);
            se1 = max(se1, sh1 + price);
            sh1 = max(sh1, -price);
        }
        return se2;
    }
};