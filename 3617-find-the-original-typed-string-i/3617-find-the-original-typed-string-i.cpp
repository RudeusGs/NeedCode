class Solution {
public:
    int possibleStringCount(string word) {
        map<char, pair<int,int>> mp;
        int res = 1;
        int n = word.size();
        for (int i = 0; i < n;) {
            char c = word[i];
            int count = 0;
            while (i < n && word[i] == c) {
                count++;
                i++;
            }
            mp[c] = {i - 1, count};
            res += count - 1;
        }
        return res;
    }
};
