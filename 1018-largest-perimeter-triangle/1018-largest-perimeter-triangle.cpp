class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i = 0; i + 2 < (int)nums.size(); ++i){
            if((long long)nums[i] < (long long)nums[i+1] + nums[i+2]){
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return 0;
    }
};