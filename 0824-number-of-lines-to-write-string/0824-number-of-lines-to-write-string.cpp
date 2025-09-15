class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum = 0;
        int r = 1; 
        for(char c : s){
            int w = widths[c - 'a'];
            if(sum + w > 100){
                r++;
                sum = 0;
            }
            sum += w;
        }
        return {r, sum};
    }
};