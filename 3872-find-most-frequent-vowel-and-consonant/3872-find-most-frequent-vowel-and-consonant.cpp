class Solution {
public:
    int maxFreqSum(string s) {
        if(s.size() == 0) return 0;
        map<char, long long> vowel;
        map<char, long long> consonant;
        for(int i = 0; i < s.size() ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowel[s[i]]++;
            else
                consonant[s[i]]++;
        }
        long long max1 = 0, max2 = 0;
        for(auto i : vowel){
            if(i.second > max1){
                max1 = i.second;
            }
        }
        for(auto i : consonant){
            if(i.second > max2){
                max2 = i.second;
            }
        }
        return max1 + max2;
    }
};