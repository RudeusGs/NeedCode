class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return false;
        bool check = false;
        bool check1 = false;
        string s = "aeiouAEIOU";
        for(char c : word){
            if(!isalnum(c)) return false;
            if(isalpha(c)){
                if(s.find(c) != string::npos){
                    check = true;
                } else{
                    check1 = true;
                }
            }
        }
        return check && check1;
    }
};
