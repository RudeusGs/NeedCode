class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        set<int> s2(suits.begin(), suits.end());
        map<int, int> mp;
        for(auto i : ranks) mp[i]++;
        int a = -1;
        for(auto i : mp){
            a = max(a, i.second);
        }
        if(s2.size() == 1) return "Flush";
        else if(a == 3 || a == 4) return "Three of a Kind";
        else if(a == 2) return "Pair";
        else return "High Card";
    }
};