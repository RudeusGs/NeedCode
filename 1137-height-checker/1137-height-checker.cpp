class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int result = 0;
        multiset<int> s;
        for(int i = 0; i < heights.size(); i++){
            s.insert(heights[i]);
        }
        int i = 0;
        for(int a : s){
            if(a != heights[i]){
                result++;
            }
            i++;
        }
        return result;
    }
};