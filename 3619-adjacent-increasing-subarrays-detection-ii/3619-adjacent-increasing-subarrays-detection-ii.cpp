class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int a = 0;
        int b = 0;
        for(int i = 0; i < n; i++){
            ++b;
            if(i == n - 1 || nums[i] >= nums[i + 1]){
                ans = max(ans, b / 2);
                ans = max(ans, min(a, b));
                a = b;
                b = 0;
            }
        }
        return ans;
    }
};