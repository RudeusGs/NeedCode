class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs[0].size(); i++){
            bool check = true;
            char a = strs[0][i];
            for(int j = 1; j < strs.size(); j++){
                if(a != strs[j][i]){
                    check = false;
                    break;
                } 
            }
            if(check) res += a;
            else break;
        }
        return res;
    }
};