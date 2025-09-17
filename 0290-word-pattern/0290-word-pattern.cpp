class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string, char> mp;
        int cnt = 0;
        set<char> se;
        stringstream ss(s);
        string temp;
        while(ss >> temp){
            if(mp.count(temp)){
                if(mp[temp] != pattern[cnt]) return false;
            }
            else{
                if(se.count(pattern[cnt])) return false;
                mp[temp] = pattern[cnt];
                se.insert(pattern[cnt]);
            }
            cnt++;
        }
        return cnt == pattern.size();
    }
};