class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int a = 0;
        for(int x : nums) a += x;
        int l = 0;
        for(int i = 0; i < nums.size(); i++){
            int r = a - l - nums[i];
            if(l == r) return i;
            l += nums[i];
        }
        return -1;
    }
};