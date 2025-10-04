class Solution {
public:
    int balancedStringSplit(string s) {
       int res = 0, b = 0;
        for(char c : s){
            if(c == 'R') b++;
            else b--;
            if(b == 0) res++;
        }
        return res;
    }   
};