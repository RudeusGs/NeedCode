class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
         sort(nums.begin(), nums.end());
        long long a = LLONG_MIN;
        int res = 0;
        for(auto num : nums){
            long long left = (long long)num - k;
            long long right = (long long)num + k;
            long long placed = max(left, a + 1);
            if(placed <= right){
                a = placed;
                res++;
            }
        }
        return res;
    }
};
