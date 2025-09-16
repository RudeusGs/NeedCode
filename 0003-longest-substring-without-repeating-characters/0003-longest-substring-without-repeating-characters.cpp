class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, pair<int,int>> mp; // char : index, count
        int left = 0, res = 0;
        for(int i = 0; i < (int)s.size(); i++){
            char c = s[i];
            if(mp.count(c) && mp[c].first >= left){
                left = mp[c].first + 1;
            }
            mp[c] = {i, mp[c].second + 1};
            res = max(res, i - left + 1);
        }
        return res;
    }
};