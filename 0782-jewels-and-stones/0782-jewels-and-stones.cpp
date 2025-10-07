class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> se;
        for(auto i : jewels) se.insert(i);
        int res = 0;
        for(auto i : stones){
            if(se.count(i)) res++;
        }
        return res;
    }
};