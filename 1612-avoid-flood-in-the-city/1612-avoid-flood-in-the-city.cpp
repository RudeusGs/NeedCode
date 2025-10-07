class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        vector<int> res(rains.size(), 1);
        unordered_map<int, int> mp;
        set<int> se;
        for(int i = 0; i < rains.size(); i++){
            if(rains[i] == 0) se.insert(i);
            else{
                res[i] = -1;
                if(mp.count(rains[i])){
                    auto it = se.upper_bound(mp[rains[i]]);
                    if(it == se.end()) return {};
                    res[*it] = rains[i];
                    se.erase(it);
                }
                mp[rains[i]] = i;
            }
        }
        return res;
    }
};