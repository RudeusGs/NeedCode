class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> cnt;
        for(auto c : s) cnt[c]++;
        for(auto c : t){
            if(--cnt[c] < 0) return c;
        }
        return ' ';
    }
};