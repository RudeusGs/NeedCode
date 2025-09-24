class Solution {
public:
    int findLHS(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        map<int, int> mp;
        for(auto i : nums) mp[i]++;
        for(auto i : mp){
            v1.push_back(i.first);
            v2.push_back(i.second);
        }
        vector<int> res;
        for(int i = 1; i < v1.size(); i++){
            if(v1[i] - v1[i - 1] == 1) res.push_back(v2[i] + v2[i - 1]);
        }
        if(res.empty()) return 0;
        return *max_element(res.begin(), res.end());
    }
};