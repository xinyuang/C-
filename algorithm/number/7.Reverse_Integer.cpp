class Solution {
public:
    int reverse(int x) {
        int res = 0;
        int res_next = 0;
        while(x != 0) {
            res_next = res*10 + x%10;
            x = x/10;
            if (res != res_next/10) {
                return 0;
            }
            res = res_next;
        }
        return res;
    }
};