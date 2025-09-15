class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        long long i = 1;
        for(; i < n; i *= 3);
        return i == n;
    }
};