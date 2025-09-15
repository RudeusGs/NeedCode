class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        string t;
        vector<string> v;
        while(ss >> t){
            v.push_back(t);
        }
        vector<bool> check(v.size(), false);
        int res = v.size();
        for(int i = 0; i < brokenLetters.size(); i++){
            for(int j = 0; j < v.size(); j++){
                if(v[j].find(brokenLetters[i]) != string::npos && check[j] == false){
                    res--;
                    check[j] = true;
                }
            }
        }
        return res;
    }
};