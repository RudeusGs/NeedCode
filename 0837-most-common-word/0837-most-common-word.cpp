class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for (char &c : paragraph) c = ispunct(c) ? ' ' : tolower(c);
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> mp;
        string word, res;
        int cnt = 0;
        stringstream ss(paragraph);
        while(ss >> word){
            if(!ban.count(word)){
                mp[word]++;
                if(mp[word] > cnt){
                    cnt = mp[word];
                    res = word;
                }
            }
        }
        return res;
    }
};