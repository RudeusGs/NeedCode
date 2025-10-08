class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> mp;
        stringstream ss(s1 + " " + s2);
        string word;
        while(ss >> word){
            mp[word]++;
        }
        vector<string> res;
        for(auto &p : mp){
            if(p.second == 1) res.push_back(p.first);
        }
        return res;
    }
};