class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        for(auto i :  arr) mp[i]++;
        vector<int> v;
        for(auto i : mp){
            if(i.first == i.second) v.push_back(i.first);
        }
        if(v.empty()) return -1;
        return *max_element(v.begin(), v.end());;
    }
};