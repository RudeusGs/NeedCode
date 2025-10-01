class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        for(int i = 0; i < s.size(); i+=k){
            string a = s.substr(i, k);
            if(a.size() == k) res.push_back(a);
            else{
                int b = k - a.size();
                while(b--){
                    a += fill;
                }
                res.push_back(a);
            }
        }
        return res;
    }
};