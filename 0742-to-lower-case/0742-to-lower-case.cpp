class Solution {
public:
    string toLowerCase(string s) {
        string a = s;
        for(int i = 0; i < s.size(); i++){
            if(a[i] >= 65 && a[i] <= 90){
                a[i] += 32;
            }
        }
        return a;
    }
};