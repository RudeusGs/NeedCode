class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        bool check = false;
        vector<int> v;
        int a = 0, b = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++){
            if(isPrime(nums[i][a])){
                v.push_back(nums[i][a]);
            }
            if(isPrime(nums[i][b])){
                v.push_back(nums[i][b]);
            }
            a++;
            b--;
        }
        if(!v.empty()){
            return *max_element(v.begin(), v.end());
        }
        else return 0;
    }
    bool isPrime(long long n) {
        if (n < 2) return false;
        if (n % 2 == 0) return n == 2;
        if (n % 3 == 0) return n == 3;
        for (long long i = 5; i * i <= n; i += 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        return true;
    }
};