class Solution {
public:
    int maxDifference(string s) {
        map<char, int> mp;
        for(auto i : s) mp[i]++;
        vector<int> res;
        for(auto i : mp){
            res.push_back(i.second);
        }
        sort(res.rbegin(), res.rend());
        int a, b;
        for(auto i : res){
            if(i % 2 == 1){
                a = i;
                break;
            }
        }
        sort(res.begin(), res.end());
        for(auto i : res){
            if(i % 2 == 0){
                b = i;
                break;
            }
        }
        return a - b;
    }
};