class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end(), greater<int>());
        int a = 0;
        for(int x : nums) a += x;
        int cur = 0;
        for(int x : nums){
            res.push_back(x);
            cur += x;
            if(cur > a - cur) break;
        }
        return res;
    }
};
