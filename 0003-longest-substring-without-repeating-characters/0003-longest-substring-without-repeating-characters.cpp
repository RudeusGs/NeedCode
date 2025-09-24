class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int l = 0;
        vector<int> v(256, -1);
        for(int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if(v[c] >= l) l = v[c] + 1;
            v[c] = i;
            res = max(res, i - l + 1);
        }
        return res;
    }
};