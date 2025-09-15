class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        long long x = 1;
        for (; x < n; x *= 4);
        return x == n;
    }
};