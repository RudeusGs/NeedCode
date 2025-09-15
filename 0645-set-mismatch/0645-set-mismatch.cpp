class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int> result(2);
        for(int i = 1; i <= nums.size(); i++){
            if(mp[i] == 2) result[0] = i;
            if(mp[i] == 0) result[1] = i;
        }
        return result;
    }
};