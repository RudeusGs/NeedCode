class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        for(auto i : nums) mp[i]++;
        int m = INT_MIN;
        for(auto i : mp){
            if(i.second > m) m = i.second;
        }
        int res = 0;
        for(auto i : mp){
            if(i.second == m) res += i.second;
        }
        return res;
    }
};