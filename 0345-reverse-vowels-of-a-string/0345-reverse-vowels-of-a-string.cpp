class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        vector<int> vindex;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                v.push_back(s[i]);
                vindex.push_back(i);
            }
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < vindex.size(); i++){
            s[vindex[i]] = v[i];
        }
        return s;
    }
};