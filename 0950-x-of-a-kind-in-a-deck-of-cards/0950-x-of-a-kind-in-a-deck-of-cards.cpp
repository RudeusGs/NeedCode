class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> mp;
        for(auto i : deck) mp[i]++;
        int res = 0;
        for(auto &p : mp){
            res = gcd(res, p.second);
        }
        return res >= 2;
    }
};