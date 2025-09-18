class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<bool> used(fruits.size(), false);
        int res = fruits.size();
        for(int i = 0; i < fruits.size(); i++){
            for(int j = 0; j < baskets.size(); j++){
                if(fruits[i] <= baskets[j] && !used[j]){
                    used[j] = true;
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};