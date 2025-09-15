class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1 = INT_MIN, profit1 = 0;
        int buy2 = INT_MIN, profit2 = 0;
        for(int price : prices){
            buy1 = max(buy1, -price);
            profit1 = max(profit1, price + buy1);
            buy2 = max(buy2, profit1 - price);
            profit2 = max(profit2, price + buy2);
        }

        return profit2;
    }
};