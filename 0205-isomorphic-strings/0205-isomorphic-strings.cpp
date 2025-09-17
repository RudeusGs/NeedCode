class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        map<char, int> mp1;
        map<char, int> mp2;
        bool check = true;
        for(int i = 0; i < s.size(); i++){
            char a = s[i];
            char b = t[i];
            if(mp1.count(a)){
                if(mp1[a] != b) return false;
            }
            else{
                mp1[a] = b;
            }
            if(mp2.count(b)){
                if(mp2[b] != a) return false;
            }
            else{
                mp2[b] = a;
            }
        }
        return check;
    }
};