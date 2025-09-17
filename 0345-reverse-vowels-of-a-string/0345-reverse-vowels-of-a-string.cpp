class Solution {
public:
    bool isVowel(char k){
        return k == 'a' || k == 'e'|| k == 'i' || k == 'o' || k == 'u' 
        || k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U';
    }
    string reverseVowels(string s) {
        // int l = 0, r = s.size() - 1;
        // while(l <= r){
        //     if(!isVowel(s[l])) { l++; continue; }
        //     if(!isVowel(s[r])) { r--; continue; }
        //     swap(s[l], s[r]);
        //     l++;
        //     r--;
        // }
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