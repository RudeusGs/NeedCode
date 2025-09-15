class Solution {
public:
    vector<int> diStringMatch(string s) {
        int a = 0, b = s.length();
        vector<int> v;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'I'){
                v.push_back(a);
                a++;
            }
            else{
                v.push_back(b);
                b--;
            }
        }
        v.push_back(a);
        return v;
    }
};