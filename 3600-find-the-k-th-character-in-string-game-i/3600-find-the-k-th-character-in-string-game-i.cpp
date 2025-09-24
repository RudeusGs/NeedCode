class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(s.size() < k){
            string t = s;
            for(char &c : t){
                if(c == 'z') c = 'a';
                else c += 1;
            }
            s += t;
        }
        return s[k - 1];
    }
};