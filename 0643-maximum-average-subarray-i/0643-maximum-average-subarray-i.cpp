class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double a = 0;
        for(int i = 0; i < k; i++){
            a += nums[i];
        }
        double res = a;
        for(int i = k; i < nums.size(); i++){
            a = a + nums[i] - nums[i - k];
            res = max(res, a);
        }
        return res / k;
    }
};