class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if(m == 0) return 0;
        for(int i = 0; i <= n - m; i++){
            set<int> s;
            for(int j = 0; j < m; j++){
                if(haystack[i + j] == needle[j]){
                    s.insert(j);
                }else{
                    break;
                }
            }
            if(s.size() == m){
                return i;
            }
        }
        return -1;
    }
};