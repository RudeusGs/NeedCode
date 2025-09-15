class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int n = strs.size();
        char temp;
        for(int j = 0; j < strs[0].size(); j++){
            bool check = true;
            temp = strs[0][j];
            for(int i = 0; i < n; i++){
                if(strs[i][j] != temp){
                    check = false;
                    break;
                }
            }
            if(check){
                result += temp;
            }else{
                break;
            }
        }
        return result;
    }
};