class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> mp;
        for(auto i : nums) mp[i]++;
        int a = 0, b = 0;
        int res = 0;
        bool check = false;
        for(auto &i : mp){
            int t1 = i.first, t2 = i.second;
            if(check && t1 - a == 1) res = max(res, b + t2);
            a = t1;
            b = t2;
            check = true;
        }
        return res;
    }
};