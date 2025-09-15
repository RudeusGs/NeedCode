class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        string s = words[0];
        for(char c : s){
            bool ok = true;
            for(int i = 1; i < words.size(); i++){
                auto pos = words[i].find(c);
                if(pos == string::npos){ ok = false; break; }
                words[i].erase(pos, 1);
            }
            if(ok)ans.push_back(string(1,c));
        }
        return ans;
    }
};