class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;
        map<char, char> mp1;
        map<char, char> mp2;
        for(int i = 0; i < s.size(); i++){
            char cs = s[i], ct = t[i];
            if(mp1.count(cs) && mp1[cs] != ct) return false;
            if(mp2.count(ct) && mp2[ct] != cs) return false;
            mp1[cs] = ct;
            mp2[ct] = cs;
        }
        return true;
    }
};