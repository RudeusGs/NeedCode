class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(), m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> res;
        for(auto i : spells){
            long long a = (success + i - 1) / i;
            auto id = lower_bound(potions.begin(), potions.end(), a) - potions.begin();
            res.push_back(m - id);
        }
        return res;
    }
};
