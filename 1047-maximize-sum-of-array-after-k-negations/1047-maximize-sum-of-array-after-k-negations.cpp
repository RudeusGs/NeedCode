class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int cnt = 0;
        int res = 0;
        for(auto i : nums){
            if(i < 0){
                cnt++;
            }
        }
        sort(nums.begin(), nums.end());
        if(cnt == 0){
            int sum = accumulate(nums.begin(), nums.end(), 0);
            if(k % 2 == 1) res = sum - 2 * nums[0];
            else res = sum;
        }
        else if(cnt >= k){
            for(int i = 0; i < nums.size(); i++){
                if(k > 0 && nums[i] < 0){
                    res += -nums[i];
                    k--;
                } else {
                    res += nums[i];
                }
            }
        }
        else{
            for(int i = 0; i < nums.size(); i++){
                nums[i] = abs(nums[i]);
            }
            int sum = accumulate(nums.begin(), nums.end(), 0);
            if((k - cnt) % 2 == 1){
                int mn = *min_element(nums.begin(), nums.end());
                res = sum - 2 * mn;
            }else{
                res = sum;
            }
        }
        return res;
    }
};
