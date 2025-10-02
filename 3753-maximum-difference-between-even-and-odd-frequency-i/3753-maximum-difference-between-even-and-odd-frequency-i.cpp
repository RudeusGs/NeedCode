class Solution {
public:
    int maxDifference(string s) {
        map<char, int> mp;
        int a = -1, b = INT_MAX;
        for(auto i : s){
            mp[i]++;
        }
        for(auto i : mp){
            if(i.second % 2 == 1){
                a = max(a, i.second);
            }
            else{
                b = min(b, i.second);
            }
        }
        if (a == -1 || b == INT_MAX) return 0; 
        return a - b;
    }
};