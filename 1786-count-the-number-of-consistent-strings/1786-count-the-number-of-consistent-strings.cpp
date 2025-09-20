class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = 0;
        bool check;
        for(int i = 0; i < words.size(); i++){
            check = true;
            for(int j = 0; j < words[i].size(); j++){
                if(allowed.find(words[i][j]) == string::npos){
                    check = false;
                    break;
                } 
            }
            if(check) res++;
        }
        return res;
    }
};