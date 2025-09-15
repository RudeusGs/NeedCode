class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = *max_element(nums.begin(), nums.end());
        int res;
        for(int i = 0; i < nums.size(); i++){
            if(n == nums[i]) res = i;
        }
        sort(nums.begin(), nums.end());
        int max2 = nums[nums.size() - 2];
        int temp = n - max2;
        if(n >= max2 * 2) return res;
        return -1;
    }
};