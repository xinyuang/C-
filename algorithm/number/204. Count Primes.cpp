class Solution {
public:
    int countPrimes(int n) {
        if (n == 0 || n == 1) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for (int i = 2; i * i < n; i++) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
        return count(isPrime.begin(), isPrime.end(), true);
    }
};