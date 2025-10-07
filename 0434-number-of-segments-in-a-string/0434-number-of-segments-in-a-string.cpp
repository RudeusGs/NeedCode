class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        int res = 0;
        string a;
        while(ss >> a){
            res++;
        }
        return res;
    }
};