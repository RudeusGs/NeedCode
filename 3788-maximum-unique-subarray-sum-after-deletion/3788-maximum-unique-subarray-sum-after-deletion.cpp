class Solution {
public:
    int maxSum(vector<int>& nums) {
        int a = *max_element(nums.begin(), nums.end());
        set<int> se;
        if(a < 0) return a;
        else{
            for(auto i : nums){
                if(i >= 0)
                se.insert(i);
            }
            return accumulate(se.begin(), se.end(), 0);
        }
    }
};