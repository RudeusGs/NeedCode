class Solution {
public:
    bool detectCapitalUse(string word) {
        bool check;
        bool res = true, res1 = true;
        for(int i = 1; i < word.size(); i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                res = false;
            }
            if(word[i] >= 'a' && word[i] <= 'z'){
                res1 = false;
            }
        }
        if(word[0] >= 'a' && word[0] <= 'z' && res || word[0] >= 'A' && word[0] <= 'Z' && res){
            check = true;
        }
        else if(word[0] >= 'A' && word[0] <= 'Z' && res1){
            check = true;
        }
        else{
            check = false;
        }
        return check;
    }
};