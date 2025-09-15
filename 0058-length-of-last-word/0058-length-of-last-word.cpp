class Solution {
public:
    int lengthOfLastWord(string s) {
        int result = 0;
        int i = s.size() - 1;
        while(i >= 0 && s[i] == ' ') i--;
        while(i >= 0 && s[i] != ' '){
            result++;
            i--;
        }
        return result;
    }
};