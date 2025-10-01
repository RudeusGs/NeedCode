class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int l = 0, r = 1;
        int res = -1;
        while(r < nums.size()){
            if(nums[l] < nums[r]){
                res = max(res, nums[r] - nums[l]);
            }
            else l = r;
            r++;
        }
        return res;
    }
};