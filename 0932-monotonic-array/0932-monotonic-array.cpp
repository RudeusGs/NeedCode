class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
         bool a = true, b = true;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]) a = false;
            if(nums[i] < nums[i+1]) b = false;
        }
        return a || b;
    }
};