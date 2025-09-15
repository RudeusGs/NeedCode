class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string a = "qwertyuiopQWERTYUIOP";
        string b = "asdfghjklASDFGHJKL";
        string c = "zxcvbnmZXCVBNM";
        vector<string> result;
        for(auto i : words){
            int ca = true, cb = true, cc = true;
            for(auto j : i){
                if(a.find(j) == string::npos) ca = false;
                if(b.find(j) == string::npos)   cb = false;
                if(c.find(j) == string::npos)   cc = false;
            }    
            if(ca || cc || cb) result.push_back(i);
        }
        return result;

    }
};