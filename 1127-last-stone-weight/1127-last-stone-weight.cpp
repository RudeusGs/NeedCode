class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int m1, m2;
        while(stones.size() > 1){
            m1 = *max_element(stones.begin(), stones.end());
            auto it = find(stones.begin(), stones.end(), m1);
            stones.erase(it);
            m2 = *max_element(stones.begin(), stones.end());
            auto it1 = find(stones.begin(), stones.end(), m2);
            stones.erase(it1);
            int k = abs(m1 - m2);
            if(m1 != m2) stones.push_back(k);
        }
        return stones.empty() ? 0 : stones[0];
    }
};