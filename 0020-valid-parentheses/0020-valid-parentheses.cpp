class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;
        for(char a : s){
            if(a == '[' || a == '(' || a == '{') sta.push(a);
            else{
                if(sta.empty()) return false;
                char b = sta.top();
                 if((a == ']' && b != '[') ||
                   (a == '}' && b != '{') ||
                   (a == ')' && b != '('))
                    return false;
                sta.pop();

            }
        }
        return sta.empty();
    }
};