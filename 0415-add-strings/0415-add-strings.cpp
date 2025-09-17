class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = max(num1.size(), num2.size());
        while(num1.size() < n) num1.insert(num1.begin(), '0');
        while(num2.size() < n) num2.insert(num2.begin(), '0');
        string res;
        int temp1 = 0;
        for(int i = n - 1; i >= 0; i--){
            int temp = (num1[i] - '0') + (num2[i] - '0') + temp1;
            res.push_back((temp % 10) + '0');
            temp1 = temp / 10;
        }
        if(temp1) res.push_back('1');
        reverse(res.begin(), res.end());
        return res;
    }
};