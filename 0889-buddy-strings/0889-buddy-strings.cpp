class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;
        if(s == goal){
            set<char> se(s.begin(), s.end());
            return se.size() < s.size();
        }
        vector<int> v;
        for(int i = 0; i < s.size(); i++){
            if (s[i] != goal[i]) v.push_back(i);
        }
        if(v.size() != 2) return false;
        swap(s[v[0]], s[v[1]]);
        return s == goal;
    }
};