class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int a = 0, b = 0;
        for(int i = 0; i < position.size(); i++){
            if(position[i] % 2 == 0) a++;
            else b++;
        }
        return min(a, b);
    }
};