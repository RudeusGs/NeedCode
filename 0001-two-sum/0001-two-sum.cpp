class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int a = target - nums[i];
            if(mp.count(a)){
                return {mp[a], i};
            }
            mp[nums[i]] = i;
        }
        return { };
    }
};