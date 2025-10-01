class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;
        int a = 0;
        if(numBottles < numExchange){
            return numBottles;
        }
        while(numBottles >= numExchange){
            a = numBottles % numExchange;
            numBottles /= numExchange;
            res += numBottles;
            numBottles += a;
        }
        return res;
    }
};