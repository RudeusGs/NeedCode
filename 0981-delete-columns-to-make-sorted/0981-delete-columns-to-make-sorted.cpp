class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int i = strs[0].size();
        int j = strs.size() - 1;
        int c = 0;
        for(int a = 0; a < i; a++){
            for(int b = 0; b < j; b++){
                if(strs[b][a] > strs[b+1][a]){
                    c++;
                    break;
                }
            }
        }
        return c;
    }
};