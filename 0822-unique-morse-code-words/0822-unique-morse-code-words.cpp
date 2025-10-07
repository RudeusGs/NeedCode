class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char, string> mp = {
        {'a', ".-"},   {'b', "-..."}, {'c', "-.-."}, {'d', "-.."},
        {'e', "."},    {'f', "..-."}, {'g', "--."},  {'h', "...."},
        {'i', ".."},   {'j', ".---"}, {'k', "-.-"},  {'l', ".-.."},
        {'m', "--"},   {'n', "-."},   {'o', "---"},  {'p', ".--."},
        {'q', "--.-"}, {'r', ".-."},  {'s', "..."},  {'t', "-"},
        {'u', "..-"},  {'v', "...-"}, {'w', ".--"},  {'x', "-..-"},
        {'y', "-.--"}, {'z', "--.."}};
        set<string> se;
        string s;
        for(int i = 0; i < words.size(); i++){
            s = "";
            for(int j = 0; j < words[i].size(); j++){
                s += mp[words[i][j]];
            }
            se.insert(s);
        }
        return se.size();
    }
};