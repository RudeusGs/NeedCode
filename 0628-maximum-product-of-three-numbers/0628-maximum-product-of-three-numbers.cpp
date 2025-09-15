class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // return max(nums[n-1]*nums[n-2]*nums[n-3], nums[0]*nums[1]*nums[n-1]);

       sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        vector<int> v;
        while(v.size() < 3 && l <= r){
            if(abs(nums[l]) > abs(nums[r])){
                v.push_back(nums[l]);
                l++;
            }else{
                v.push_back(nums[r]);
                r--;
            }
        }
        int case1 = v[0] * v[1] * v[2];
        v.clear();
        v.push_back(nums[0]);
        v.push_back(nums[1]);
        v.push_back(nums[nums.size()-1]);
        int case2 = v[0] * v[1] * v[2];
        v.clear();
        v.push_back(nums[nums.size()-2]);
        v.push_back(nums[nums.size()-3]);
        v.push_back(nums[nums.size()-1]);
        int case3 = v[0] * v[1] * v[2];
        vector<int> res = {case1, case2, case3};
        return *max_element(res.begin(), res.end());
    }
};