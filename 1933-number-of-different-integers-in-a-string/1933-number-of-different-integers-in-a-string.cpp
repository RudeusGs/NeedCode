class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> se;
        string a = "";
        for(int i = 0; i < word.size(); i++){
            if(isdigit(word[i])){
                a += word[i];
            }
            else if(isalpha(word[i]) && a.size() != 0){
                int i = 0;
                while (i < a.size() && a[i] == '0') i++;
                se.insert(a.substr(i));
                a = "";
            }
        }
        if(!a.empty()){
            int i = 0;
            while (i < a.size() && a[i] == '0') i++;
            se.insert(a.substr(i));
        }
        return se.size();
    }
};