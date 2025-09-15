class Solution {
public:
    string largestGoodInteger(string num) {
         string res = "";
        for (int i = 1; i < num.size() - 1; i++) {
            if (num[i] == num[i - 1] && num[i] == num[i + 1]) {
                string a(3, num[i]);
                if (a > res) res = a;
            }
        }
        return res;
    }
};