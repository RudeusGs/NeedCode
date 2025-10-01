class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n, -1);
        long long a = 0;
        int sz = 2 * k + 1;
        if(n < sz) return v;
        for(int i = 0; i < sz; i++){
            a += nums[i];
        }
        v[k] = a / sz;
        for(int i = k + 1; i < n - k; i++){
            a = a - nums[i - k - 1] + nums[i + k];
            v[i] = a / sz;
        }
        return v;
    }
};