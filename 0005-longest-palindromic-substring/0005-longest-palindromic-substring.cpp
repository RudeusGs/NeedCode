class Solution {
public:
    string twopointer(string &s, int left, int right) {
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }
    string longestPalindrome(string s) {
        string res = "";
        for(int i = 0; i < s.size(); i++){
            string a = twopointer(s, i, i);
            if(a.size() > res.size()) res = a;
            string b = twopointer(s, i, i + 1);
            if(b.size() > res.size()) res = b;
        }
        return res;
    }
};