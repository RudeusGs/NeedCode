class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size() > 1){
            vector<int> v(nums.size() - 1);
            for(int i = 0; i < v.size(); i++){
                v[i] = (nums[i] + nums[i+1]) % 10;
            }
            nums = v;
        }
        return nums[0];
    }
};
