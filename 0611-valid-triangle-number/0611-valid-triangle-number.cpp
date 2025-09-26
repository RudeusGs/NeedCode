class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), res = 0;
        for(int k = n - 1; k >= 2; k--){
            int i = 0, j = k - 1;
            while(i < j){
                if(nums[i] + nums[j] > nums[k]){
                    res += j - i;
                    j--;
                }else{
                    i++;
                }
            }
        }
        return res;
    }
};