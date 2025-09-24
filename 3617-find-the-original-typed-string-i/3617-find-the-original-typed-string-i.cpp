class Solution {
public:
    int possibleStringCount(string word) {
        int res = 1;
        int n = word.size();
        for(int i = 0; i < n;){
            char c = word[i];
            int count = 0;
            while(i < n && word[i] == c){
                count++;
                i++;
            }
            res += count - 1;
        }
        return res;
    }
};
