class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        map<char, int> mp1;
        int index = 0;
        for(char a : s){
            mp[a]++;
            mp1[a] = index;
            index++;
            
        }
        int result = INT_MAX;
        auto it1 = mp.begin();
        auto it2 = mp1.begin();
        for(; it1 != mp.end() && it2 != mp1.end(); ++it1, ++it2){
            if (it1->first == it2->first && it1->second == 1) {
                result = min(result, it2->second);
            }
        }
        return(result == INT_MAX ? -1 : result);
    }
};