class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i < s.size(); i++){
            string a = s;
            a.erase(i + 1);
            string b = s;
            b.erase(0, i + 1);
            string temp = b + a;
            if(temp == goal){
                return true;
            }
        }
        return false;
    }
};