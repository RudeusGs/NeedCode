class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        map<int,int> mp;
        for(int x: arr1) mp[x]++;
        for(int x: arr2){
            if(mp[x] == 0) continue;
            int a = mp[x];
            if(x == 0) a = 1;
            for(int i = 0; i < a; i++)
                res.push_back(x);
            mp[x] = 0;
        }
        vector<int> t;
        for(auto &p : mp){
            int x = p.first;
            int c = p.second;
            for(int i = 0 ; i < c ; i++) 
                t.push_back(x);
        }
        sort(t.begin(), t.end());
        for(int x : t) 
            res.push_back(x);
        return res;
    }
};
