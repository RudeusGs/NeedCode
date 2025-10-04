class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int res = 0;
        multimap<int, int> mp;
        for(auto i : boxTypes){
            mp.insert({i[0], i[1]});
        }
        vector<pair<int, int>> vpa(mp.begin(), mp.end());
        sort(vpa.begin(), vpa.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        for(auto i : vpa){
            int a = i.first;
            if(truckSize == 0) break;
            if(a > truckSize){
                a = truckSize;
            }
            res += (a * i.second);
            truckSize -= a;
        }
        return res;
    }
};