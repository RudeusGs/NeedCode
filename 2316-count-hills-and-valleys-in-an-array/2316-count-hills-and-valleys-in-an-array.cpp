class Solution {
public:
    int countHillValley(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int n = nums.size();
        if(n <= 2) return 0;
        int res = 0;
        for(int i = 1; i < n - 1; i++){
            if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1]){
                res++;
            }
            if(nums[i] < nums[i - 1] && nums[i] < nums[i + 1]){
                res++;
            }
        }
        return res;
    }
};