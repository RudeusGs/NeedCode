class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1 = INT_MIN, a = 0;
        int buy2 = INT_MIN, b = 0;
        for(int price : prices){
            buy1 = max(buy1, -price);
            a = max(a, price + buy1);
            buy2 = max(buy2, a - price);
            b = max(b, price + buy2);
        }

        return b;
    }
};