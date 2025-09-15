class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(auto i : s){
            mp[i]++;
        }
        int sum = 0;
        bool check = false;
        for(auto i : mp){
            if(i.second % 2 == 0){
                sum += i.second;
            }
            else{
                sum += i.second - 1;
                check = true;
            }
        }
        if(check) return sum += 1;
        return sum;
    }
};