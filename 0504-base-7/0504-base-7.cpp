class Solution {
public:
    string convertToBase7(int num) {
        string s;
        if(num == 0) return "0";
        bool check = num < 0; 
        num = abs(num);
        while(num > 0){
            int a = num % 7;
            s.push_back(a + '0');
            num /= 7;
        } 
        reverse(s.begin(), s.end());
        if(check){
            s.insert(s.begin(), '-');
        }
        return s;
    }
};