class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int i = 0;
        vector<pair<string, int>> vpa;
        while(i < names.size()){
            vpa.push_back({names[i], heights[i]});
            i++;
        }
        sort(vpa.begin(), vpa.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        vector<string> res;
        for(auto i : vpa) res.push_back(i.first);
        return res;
    }
};