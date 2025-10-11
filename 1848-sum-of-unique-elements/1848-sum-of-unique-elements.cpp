class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> mp;
        for(auto i : nums) mp[i]++;
        int res = 0;
        for(auto i : mp){
            if(i.second == 1){
                res += i.first;
            }
        }
        return res;
    }
};