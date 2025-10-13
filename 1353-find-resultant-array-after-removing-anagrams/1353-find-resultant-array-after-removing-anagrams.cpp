class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        if(words.empty()) return {};
        vector<string> result;
        result.push_back(words[0]);
        for (int i = 1; i < words.size(); i++){
            string a = result.back();
            string b = words[i];
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            if(a != b){
                result.push_back(words[i]);
            }
        }
        return result;
}
};