class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(auto i : s){
            if(isalnum(i)){
                a += tolower(i);
            }
        }
        int left = 0, right = a.size()-1;
        while(left < right){
            if(a[left] != a[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};